fprintf('Gaurav Gautam\n');
% Define the data points (x, y)
x = [0 1 2 3 4];
y = [1 2 4 8 16];
% Define the value of x for interpolation
x_interp = 2.5;
% Number of data points
n = length(x);
% Initialize the interpolated value
y_interp = 0;
% Compute the interpolated value using Lagrange Interpolation Method
for i = 1:n
 % Compute the Lagrange basis polynomial for the i-th data point
 basis = 1;
 for j = 1:n
 if j ~= i
 basis = basis * (x_interp - x(j)) / (x(i) - x(j));
 end
 end
 % Add the contribution of the i-th data point to the interpolated value
 y_interp = y_interp + y(i) * basis;
end
% Display the interpolated value
fprintf('Interpolated value at x = %.1f: %.4f\n', x_interp, y_interp);