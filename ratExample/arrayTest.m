function out = sizeTest(inputs)



out = calcFun(inouts);


end


function val = calcFunc(inputs)

n = inputs.n;
for i = 1:n
    val(n) = rand(1);
end

end