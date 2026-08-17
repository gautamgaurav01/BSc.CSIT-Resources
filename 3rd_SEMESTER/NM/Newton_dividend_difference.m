fprintf('Gaurav Gautam\n');
% Define the data points (x, y)
x = [0 1 2 3];
y = [1 3 5 7];
% Number of data points
n = length(x);
% Calculate the divided differences
div_diff = zeros(n);
% Initialize the first column with y values
div_diff(:,1) = y';
% Compute the divided differences
for j = 2:n
 for i = 1:n-j+1
 div_diff(i,j) = (div_diff(i+1,j-1) - div_diff(i,j-1)) / (x(i+j-1) - x(i));
 end
end
% Define the value of x for interpolation
x_interp = 1.5;
% Initialize interpolated value
y_interp = div_diff(1,1);
% Compute the interpolated value using Newton's Divided Difference Method
for j = 2:n
 term = 1;
 for i = 1:j-1
 term = term * (x_interp - x(i));
 end
 y_interp = y_interp + term * div_diff(1,j);
end
% Display the interpolated value
fprintf('Interpolated value at x = %.1f: %.4f\n', x_interp, y_interp);
