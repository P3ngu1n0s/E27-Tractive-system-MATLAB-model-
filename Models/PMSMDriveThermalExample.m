%% Three-Phase PMSM Drive with Thermal Model
% 
% This example shows a Permanent Magnet Synchronous Machine (PMSM) and an 
% inverter sized for use in a typical hybrid vehicle. The PMSM includes a 
% thermal model and empirical iron losses. The inverter is connected 
% directly to the vehicle battery, but you can also implement a DC-DC 
% converter stage in between. You can use this model to design the PMSM 
% controller, by selecting the architecture and the gains to achieve the 
% desired performance. The initial temperature of the stator windings and 
% rotor is set to 25 degrees Celsius. Ambient temperature is 27 degrees 
% Celsius. The Scopes subsystem contains scopes that allow you to see the 
% simulation results.
% 

% Copyright 2020-2023 The MathWorks, Inc.

%% Model

open_system('PMSMDriveThermal')

set_param(find_system('PMSMDriveThermal','FindAll', 'on','type','annotation','Tag','ModelFeatures'),'Interpreter','off')

%% Simulation Results from Simscape Logging
%%
%
% The plot below shows the requested and measured rotor speed for the
% test and the torque in the electric drive.
%


PMSMDriveThermalPlotMotorSpeed;

%%
%
% The plot below shows the winding and rotor temperatures of the motor.
%


PMSMDriveThermalPlotMotorTemperature;

%%

