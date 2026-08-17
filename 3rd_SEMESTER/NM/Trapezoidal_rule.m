fprintf('Gaurav Gautam\n');
% Define the function to be integrated
fun = @(x) x.^2;
% Define the limits of integration
a = 0;
b = 2;
% Number of subintervals (adjust for desired accuracy)
n = 100;
% Width of each subinterval
h = (b - a) / n;
% Compute the sum of the function values at the endpoints and half the sum of the function values at the interior points
integral_approx = (fun(a) + fun(b))/2;
for i = 1:n-1
 integral_approx = integral_approx + fun(a + i*h);
end
% Multiply the sum by the width of each subinterval
integral_approx = integral_approx * h;
% Display the result
fprintf('Approximation of the integral using the Trapezoidal Rule: %.6f\n', integral_approx);