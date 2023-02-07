%% Compare Bayesian algorithms



% 1. Paramonte...
% dspc
% pmOut = load('pmOut.mat');
% pmOut = pmOut.pm_out;
% pmProblem = pmOut.problem;
% pmResult = pmOut.result;


pmOut = load('pmOut_d2o.mat');
pmOut = pmOut.pmOut_d2o;
pmProblem = pmOut.problem;
pmResult = pmOut.result;
names = pmResult.fitNames;

% 2. dream....
drOut = load('dream_out_d2o.mat');
drOut = drOut.dreamOut_d2o;
drProblem = drOut.problem;
drResult = drOut.result;

% 3 mcmcstat
% mcOut = load('mcmcStat_out_dspc.mat');
% mcOut = mcOut.mcmcStat_out;

mcOut = load('mcmcStat_out_d2o.mat');
mcOut = mcOut.mcmcStat_d2o;
mcProblem = mcOut.problem;
mcResult = mcOut.results;
mcChain = mcResult.chain;

figure(4); clf; hold on
pmChain = pmResult.chain;
drChain = drResult.chain;

np = length(names);

plotRows = ceil(np/4);

r = 1;
c = 1;
for i = 1:np
    thisPar = pmChain(:,i);
    %thisPar = thisPar./sum(thisPar);
    subplot(plotRows,4,i);

    h = histogram(thisPar,30,'Normalization','probability');
    set(h,'FaceAlpha',0.3);
    hold on
    title(names{i});

    thisPar2 = drChain(:,i);
    %thisPar2 = thisPar2 ./sum(thisPar2);
    h2 = histogram(thisPar2,30,'Normalization','probability');
    set(h2,'FaceAlpha',0.3);

    thisPar3 = mcChain(:,i);
    h3 = histogram(thisPar3,30,'Normalization','probability');
    set(h3,'FaceAlpha',0.3);

    legend({'pm','dream','dram'});
end




