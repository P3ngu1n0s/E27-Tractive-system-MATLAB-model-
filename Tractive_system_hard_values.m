% ==========================================================
% Simulink / Simscape Initialization Parameters
% Standardized to SI Units (Meters, Kilograms, Seconds, etc.)
% ==========================================================

% --- Solver & Environment ---
tsc = 1e-5;         % [s] Source sample time based on solver

% --- Emrax 208 Motor Parameters ---
N = 10;             % [#] Number of pole pairs (Check if block asks for pairs or total poles)
MT = 150;           % [Nm] Max Torque of Emrax 208
WB = 0.0393;        % [Wb] Weber magnetic flux axial
ld = 125e-6;        % [H] Ld value Emrax 208 (Converted from microhenries)
lq = 130e-6;        % [H] Lq value Emrax 208 (Converted from microhenries)
SR = 12e-3;         % [Ohms] Stator resistance (Converted from milliohms)
RI = 0.0279;        % [kg*m^2] Rotational inertia of Emrax 208 (Replaced 256 to standard SI value)

% --- Drivetrain & Brakes ---
Diff = 4.28;        % [#] The gear ratio between teeth from E25
mpr = 0.59 * 0.0254; % [m] Radius of brake pads (Converted from inches to meters)
Cb = 1.25 * 0.0254;  % [m] Cylinder bore (Converted from inches to meters)

% --- Vehicle Dynamics ---
WheelR = 0.2032;    % [m] Wheel radius (Converted from 20.32 cm / 8 inches)
Rr = 8;           % Removed: Redundant with WheelR
RwC = 285.5; % [kg] Weight of Ramin in E25 (Converted from lbs to kg. Skip conversion if 285.5 is already kg)
HCGF = 0.9144;      % [m] CG distance from the front axle
HCGR = 0.8763;      % [m] CG distance from the rear axle
VCGG = 0.3048;      % [m] CG Height from ground (*needs correction per your note)  
