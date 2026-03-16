% Code to plot simulation results from PMSMDriveThermal
%% Plot Description:
%
% The plot below shows the requested and measured rotor speed for the
% test and the torque in the electric drive.

% Copyright 2020-2023 The MathWorks, Inc.

% Generate simulation results if they don't exist
if ~exist('simlog_PMSMDriveThermal', 'var') || ...
        simlogNeedsUpdate(simlog_PMSMDriveThermal, 'PMSMDriveThermal') 
    sim('PMSMDriveThermal')
    % Model StopFcn callback adds a timestamp to the Simscape simulation data log
end

% Reuse figure if it exists, else create new figure
if ~exist('h1_PMSMDriveThermal', 'var') || ...
        ~isgraphics(h1_PMSMDriveThermal, 'figure')
    h1_PMSMDriveThermal = figure('Name', 'PMSMDriveThermal');
end
figure(h1_PMSMDriveThermal)
clf(h1_PMSMDriveThermal)

% Get simulation results
simlog_t = simlog_PMSMDriveThermal.PMSM.R.w.series.time;
simlog_tqMot = logsout_PMSMDriveThermal.get('torque');
simlog_wRef = logsout_PMSMDriveThermal.get('speed_request');
simlog_wMot = simlog_PMSMDriveThermal.PMSM.R.w.series.values('rpm');

% Plot results
simlog_handles(1) = subplot(2, 1, 1);
plot(simlog_wRef.Values.Time, simlog_wRef.Values.Data, 'LineWidth', 1)
hold on
plot(simlog_t, simlog_wMot, 'LineWidth', 1)
hold off
grid on
title('Rotor speed')
ylabel('Speed (rpm)')
legend({'Reference', 'Measured'},'Location','Best');

simlog_handles(2) = subplot(2, 1, 2);
plot(simlog_t, simlog_tqMot.Values.Data,  'LineWidth', 1)
grid on
title('Motor torque')
ylabel('Torque (Nm)')
xlabel('Time (s)')

linkaxes(simlog_handles, 'x')

% Remove temporary variables
clear simlog_t simlog_handles temp_colororder
clear simlog_wRef simlog_tqMot simlog_wMot
