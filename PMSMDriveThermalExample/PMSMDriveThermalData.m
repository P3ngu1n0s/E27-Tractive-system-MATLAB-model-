%% Parameters for Three-Phase PMSM Drive with Thermal Model Example

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

% Copyright 2020-2023 The MathWorks, Inc.

%% PMSM Parameters 
PM = 0.03;  % Permanent magnet flux linkage
Ld = 2e-4;  % d-axis inductance
Lq = 2e-4;  % q-axis inductance
L0 = 2e-4;  % 0-axis inductance
Rs = 0.013; % Stator resistance
N  = 6;     % Number of pole pairs
J  = 0.2;   % Moment of inertia
Imax = 100; % Max stator current (peak value)
Tmax = 1.5*N*PM*Imax; % Max lectromagnetic torque
fnom = 100;  % Nominal frequency (Hz)
rpm_nom = 60*fnom/N;      % Nominal rotor speed (rpm)
omegam_nom = 2*pi*fnom/N; % Nominal mechanical rotor speed
Pmax = omegam_nom*Tmax;   % Maximum power

% Iron Losses
losses_oc = [150, 400, 0]; % Open-circuit iron losses, [P_hysteresis P_eddy P_excess] (W)
losses_sc = [50, 150, 0];  % Short-circuit iron losses, [P_hysteresis P_eddy P_excess] (W)
f_losses  = 100; % Electrical frequency at which losses determined (Hz)
Isc_losses = 100; % Short-circuit RMS current for short-circuit iron losses (A)

% Temperature Dependence
alpha = 3.93e-3;     % Resistance temperature coefficient (1/K)
alpha_flux = -0.001; % Permanent magnet flux temperature coefficient (1/K)
Tmeas = 298.15;      % Measurement temperature (K)

% Thermal Port
stator_thermal_mass = 100; % Thermal mass for each stator winding (J/K)
rotor_thermal_mass = 200;  % Rotor thermal mass (J/K)
Rm_percent_rotor = 90;     % Percentage of main flux path iron losses associated with the rotor
Rd_percent_rotor = 30;     % Percentage of cross-tooth flux path iron losses associated with the rotor

%% Control Parameters
Ts = 2e-6;   % Fundamental sample time (s)
fsw = 2e3;   % Switching frequency (Hz)
fc = fsw*10; % Control loop frequency (Hz)
Tsc = 1/fc;  % Control loop sample time
