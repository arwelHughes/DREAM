function L = mixture(x)

% 1-dimensional mixture distribution....

L = 1/6*normpdf(x,-8,1) + 5/6*normpdf(x,10,1);


end