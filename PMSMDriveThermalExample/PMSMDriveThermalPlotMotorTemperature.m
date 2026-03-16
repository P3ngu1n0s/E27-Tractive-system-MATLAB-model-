% Code to plot simulation results from PMSMDriveThermal
%% Plot Description:
%
% The plot below shows the winding and rotor temperatures of the motor.

% Copyright 2020-2023 The MathWorks, Inc.

% Generate simulation results if they don't exist
if ~exist('simlog_PMSMDriveThermal', 'var') || ...
        simlogNeedsUpdate(simlog_PMSMDriveThermal, 'PMSMDriveThermal') 
    sim('PMSMDriveThermal')
    % Model StopFcn callback adds a timestamp to the Simscape simulation data log
end

% Reuse figure if it exists, else create new figure
if ~exist('h2_PMSMDriveThermal', 'var') || ...
        ~isgraphics(h2_PMSMDriveThermal, 'figure')
    h2_PMSMDriveThermal = figure('Name', 'PMSMDriveThermal');
end
figure(h2_PMSMDriveThermal)
clf(h2_PMSMDriveThermal)

% Get simulation results
simlog_t = simlog_PMSMDriveThermal.Thermal_model.Sensing_Temperature_WiA.Temperature_Sensor.T.series.time;
simlog_TA = simlog_PMSMDriveThermal.Thermal_model.Sensing_Temperature_WiA.Temperature_Sensor.T.series.values('degC');
simlog_TB = simlog_PMSMDriveThermal.Thermal_model.Sensing_Temperature_WiB.Temperature_Sensor.T.series.values('degC');
simlog_TC = simlog_PMSMDriveThermal.Thermal_model.Sensing_Temperature_WiC.Temperature_Sensor.T.series.values('degC');
simlog_TR = simlog_PMSMDriveThermal.Thermal_model.Sensing_Temperature_Rot.Temperature_Sensor.T.series.values('degC');

% Plot results
plot(simlog_t, simlog_TA,  'LineWidth', 1)
hold on
plot(simlog_t, simlog_TB,  'LineWidth', 1)
plot(simlog_t, simlog_TC,  'LineWidth', 1)
plot(simlog_t, simlog_TR,  'LineWidth', 1)
grid on
title('Motor Temperatures')
ylabel('Temperature (degC)')
xlabel('Time (s)')
legend({'Winding A', 'Winding B','Winding C','Rotor'},'Location','Best');

% Remove temporary variables
clear simlog_t simlog_handles temp_colororder
clear simlog_TA simlog_TB simlog_TC simlog_TR
