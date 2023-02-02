function [chain, MEAN, STD] = getChain(Sequences,MCMCPar)

% First assemble all sequences in one matrix
ParSet = genparset(Sequences,MCMCPar);

% Find the maximum aposteriori parameter values (last column of ParSet are log-density values!)
idx = find(ParSet(:,end)==max(ParSet(:,end))); idx = idx(1);

% Print those to screen
MAP = ParSet(idx,1:MCMCPar.n);

% Take the last 25% of the posterior samples -- assume that these samples
% are posterior samples (double check that R_stat < 1.2 for all parameters)
chain = ParSet ( floor ( 0.75 * size(ParSet,1) ) : size(ParSet,1), 1 : MCMCPar.n );

% Calculate the mean posterior value of each parameter
MEAN = mean(chain);

% Calculate the posterior standard deviation of the parameters
STD = std(chain);

end