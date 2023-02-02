% GENCR_SCRIPT   Generate MEX-function GenCR_mex from GenCR.
% 
% Script generated from project 'GenCR.prj' on 01-Feb-2023.
% 
% See also CODER, CODER.CONFIG, CODER.TYPEOF, CODEGEN.

%% Create configuration object of class 'coder.MexCodeConfig'.
cfg = coder.config('mex');
cfg.GenerateReport = true;
cfg.EnableJIT = true;
cfg.EnableJITSilentBailOut = true;

%% Define argument types for entry-point 'GenCR'.
ARGS = cell(1,1);
ARGS{1} = cell(2,1);
ARGS_1_1 = struct;
ARGS_1_1.seq = coder.typeof(0);
ARGS_1_1.steps = coder.typeof(0);
ARGS_1_1.nCR = coder.typeof(0);
ARGS{1}{1} = coder.typeof(ARGS_1_1);
ARGS{1}{2} = coder.typeof(0,[1 Inf],[0 1]);

%% Invoke MATLAB Coder.
cd('/Users/arwel.hughes/Documents/coding/DREAM/functions');
codegen -config cfg GenCR -args ARGS{1}

