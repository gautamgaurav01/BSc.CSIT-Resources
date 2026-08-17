fprintf('Gaurav Gautam\n');
f = @(x) 2^x - 5*x + 2; % Define the function using @ symbol
a = 4;
b = 5;
n = 30;

if f(a) * f(b) < 0
 for i = 1:n
 c = (a + b) / 2;
 
 fprintf('p%d=%.4f\n', i, c); % Removed unnecessary apostrophes
 if f(a) * f(c) < 0
 b = c;
 else
 a = c;
 end
 end
else
 disp('no roots between given bracket');
end