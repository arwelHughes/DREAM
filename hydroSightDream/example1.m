% Example 1


% Problem dettings defined by user
DREAMPar.d = 1;             % Dimension of the problem
DREAMPar.N = 10;            % Number of Markov Chains
DREAMPar.T = 5000;          % Number of generations
DREAMPar.lik = 1;           % Model output is likelihood

% Initial sampling and parameter ranges
Par_info.prior = 'latin';  % Latin hypercube sampling
Par_info.min = [ -20 ];     % Lower bound
Par_info.max = [ 20 ];      % Upper bound

Func_name = 'mixture';

% Run DREAM
% DREAM(Func_name,func_name_validParams, DREAMPar,Par_info,Meas_info, GUIobj, fname_suffix, varargin)
[chain,output,fx] = DREAM(Func_name,DREAMPar,Par_info);