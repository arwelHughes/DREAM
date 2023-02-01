% RAT_DREAM_ZS_COMPILE_SCRIPT   Generate MEX-function RAT_dream_zs_mex from
%  RAT_dream_zs.
% 
% Script generated from project 'RAT_dream_zs.prj' on 27-Jan-2023.
% 
% See also CODER, CODER.CONFIG, CODER.TYPEOF, CODEGEN.

%% Create configuration object of class 'coder.MexCodeConfig'.
cfg = coder.config('mex');
cfg.GenerateReport = true;
cfg.EnableJIT = true;
cfg.EnableJITSilentBailOut = true;

%% Define argument types for entry-point 'RAT_dream_zs'.
ARGS = cell(1,1);
ARGS{1} = cell(4,1);
ARGS_1_1 = struct;
ARGS_1_1.seq = coder.typeof(0);
ARGS_1_1.DEpairs = coder.typeof(0);
ARGS_1_1.nCR = coder.typeof(0);
ARGS_1_1.k = coder.typeof(0);
ARGS_1_1.parallelUpdate = coder.typeof(0);
ARGS_1_1.eps = coder.typeof(0);
ARGS_1_1.steps = coder.typeof(0);
ARGS_1_1.m0 = coder.typeof(0);
ARGS_1_1.pJumpRate_one = coder.typeof(0);
ARGS_1_1.pCR = coder.typeof('X',[1 3]);
ARGS_1_1.Restart = coder.typeof('X',[1 2]);
ARGS_1_1.modout = coder.typeof('X',[1 2]);
ARGS_1_1.save = coder.typeof('X',[1 3]);
ARGS_1_1.ABC = coder.typeof('X',[1 2]);
ARGS_1_1.m = coder.typeof(0);
ARGS_1_1.CR = coder.typeof(0,[1 Inf],[0 1]);
ARGS_1_1.n = coder.typeof(0);
ARGS_1_1.ndraw = coder.typeof(0);
ARGS_1_1.T = coder.typeof(0);
ARGS_1_1.prior = coder.typeof('X',[1 3]);
ARGS_1_1.BoundHandling = coder.typeof('X',[1 7]);
ARGS_1_1.lik = coder.typeof(0);
ARGS_1_1.Best = coder.typeof(0);
ARGS{1}{1} = coder.typeof(ARGS_1_1);
ARGS{1}{2} = coder.typeof(0,[0 0]);
ARGS_1_3 = struct;
ARGS_1_3.minn = coder.typeof(0,[1 3]);
ARGS_1_3.maxn = coder.typeof(0,[1 3]);
ARGS{1}{3} = coder.typeof(ARGS_1_3);
ARGS_1_4 = struct;
ARGS_1_4.MeasData = coder.typeof(0,[100  1]);
ARGS_1_4.N = coder.typeof(0);
ARGS{1}{4} = coder.typeof(ARGS_1_4);

%% Invoke MATLAB Coder.
codegen -config cfg RAT_dream_zs -args ARGS{1}

