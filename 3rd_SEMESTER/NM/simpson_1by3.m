fprintf('Gaurav Gautam\n');
% Define the function to be integrated
fun = @(x) x.^2;

% Define the limits of integration
a = 0;
b = 2;

% Number of subintervals (must be even)
n = 6;

% Width of each subinterval
h = (b - a) / n;

% Sum of function values at endpoints
integral_approx = fun(a) + fun(b);

% Sum of function values at odd indices (coefficient 4)
for i = 1:2:n-1
    integral_approx = integral_approx + 4 * fun(a + i*h);
end

% Sum of function values at even indices (coefficient 2)
for i = 2:2:n-2
    integral_approx = integral_approx + 2 * fun(a + i*h);
end

% Final multiplication
integral_approx = integral_approx * h / 3;

% Display result
fprintf('Approximation of the integral using Simpson''s 1/3 Rule: %.6f\n', integral_approx);