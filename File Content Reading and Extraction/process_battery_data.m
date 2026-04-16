function process_battery_data()
    % Name of the file
    filename = 'Everything.tab';
    
    if ~isfile(filename)
        error('Cannot find %s. Please make sure it is in the current MATLAB directory.', filename);
    end

    % 1. Read the raw text from the file
    rawText = fileread(filename);

    % 2. Clean up artifacts and comments using Regular Expressions
    % Remove the "" AI tags
    cleanText = regexprep(rawText, '\', '');
    % Remove line comments (anything after a ';' to the end of the line)
    cleanText = regexprep(cleanText, ';[^\n\r]*', '');

    % 3. Define the profiles to search for
    profiles = {'discharging', 'charging'};

    for p = 1:length(profiles)
        profileName = profiles{p};
        
        % Find the start of the current profile
        startIdx = strfind(cleanText, ['(' profileName]);
        if isempty(startIdx)
            continue; % Skip if the profile isn't found
        end
        
        % Determine where this profile ends (either at the next profile or EOF)
        endIdx = length(cleanText);
        for q = 1:length(profiles)
            if p ~= q
                otherIdx = strfind(cleanText, ['(' profiles{q}]);
                if ~isempty(otherIdx) && otherIdx > startIdx
                    endIdx = min(endIdx, otherIdx);
                end
            end
        end
        
        % Extract the text chunk for this specific profile
        profileText = cleanText(startIdx:endIdx);

        % 4. Isolate each parameter block using a Regex Pattern
        % The pattern dynamically matches: (paramName (Temperature) (SOC) (Data Matrix))
        pattern = '\(\s*(\w+)\s*\(([^)]+)\)\s*\(([^)]+)\)\s*\(([^)]+)\)\s*\)';
        blocks = regexp(profileText, pattern, 'tokens');

        for b = 1:length(blocks)
            paramName = blocks{b}{1};
            
            % sscanf extracts purely the numbers, ignoring all newlines and spaces
            T = sscanf(blocks{b}{2}, '%f')';         % Temperature Vector (Row)
            SOC = sscanf(blocks{b}{3}, '%f')';       % SOC Vector (Row)
            Data_flat = sscanf(blocks{b}{4}, '%f');  % Flattened Data Column
            
            cols = length(T);
            rows = length(SOC);
            
            % Verify matrix dimensions to prevent reshaping errors
            if length(Data_flat) == rows * cols
                % Reshape column-wise, then transpose to accurately recreate the row-wise data format
                Data_matrix = reshape(Data_flat, [cols, rows]).';
                
                % 5. Export to individual CSV file
                csvFilename = sprintf('%s_%s.csv', profileName, paramName);
                writematrix(Data_matrix, csvFilename);
                
                % 6. Push variables directly into the MATLAB Base Workspace
                assignin('base', sprintf('%s_T_%s', profileName, paramName), T);
                assignin('base', sprintf('%s_SOC_%s', profileName, paramName), SOC);
                assignin('base', sprintf('%s_%s', profileName, paramName), Data_matrix);
                
                fprintf('Successfully processed and loaded: %s -> %s\n', profileName, paramName);
            else
                warning('Dimension mismatch in %s %s: expected %d values, found %d. Check file formatting.', ...
                    profileName, paramName, rows*cols, length(Data_flat));
            end
        end
    end
    fprintf('\nAll done! CSV files created and variables are ready in the Workspace.\n');
end