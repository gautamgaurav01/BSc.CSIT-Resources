fprintf('Gaurav Gautam\n');
fun = @(x) x^3 - 2*x - 5;
% Initial guesses
x0 = 1;
x1 = 2;
% Tolerance and maximum iterations
tol = 1e-6;
max_iter = 1000;
% Secant method iterations
for iter = 1:max_iter
 x_next = x1 - (fun(x1) * (x1 - x0)) / (fun(x1) - fun(x0));
 if abs(x_next - x1) < tol
 fprintf('Root found: %f\n', x_next);
 fprintf('Number of iterations: %d\n', iter);
 break;
 end
 x0 = x1;
 x1 = x_next;
end