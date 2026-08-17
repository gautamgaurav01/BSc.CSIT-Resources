fprintf('Gaurav Gautam\n');
% Define the function
f = @(x) x^3 - 2*x - 5;

% Define the derivative
df = @(x) 3*x^2 - 2;

% Initial guess
x0 = 2;

% Tolerance for stopping criteria
tol = 1e-6; 

% Maximum number of iterations
maxIter = 100;

% Initialize x
x = x0;

% Newton-Raphson iteration
for iter = 1:maxIter
    x_next = x - f(x)/df(x);  % Next approximation
    
    % Check convergence
    if abs(x_next - x) < tol || abs(f(x_next)) < tol
        fprintf('Root found at x = %.8f after %d iterations\n', x_next, iter);
        break;
    end
    
    % Update x for next iteration
    x = x_next;
end

% If maximum iterations reached
if iter == maxIter && abs(x_next - x) >= tol
    fprintf('Maximum iterations reached without convergence\n');
end