fprintf('Gaurav Gautam\n');
% Newton's Forward Interpolation

% Define the data points
x = [0 1 2 3 4];
y = [1 2 4 8 16];

% Number of data points
n = length(x);

% Step size
h = x(2) - x(1);

% Calculate forward difference table
forward_diff = zeros(n,n);
forward_diff(:,1) = y';
for j = 2:n
    for i = 1:n-j+1
        forward_diff(i,j) = forward_diff(i+1,j-1) - forward_diff(i,j-1);
    end
end

% Value to interpolate
x_interp = 2.5;

% Compute p
p = (x_interp - x(1)) / h;

% Initialize interpolated value
y_interp = forward_diff(1,1);

% Newton's forward formula
term = 1;
for j = 2:n
    term = term * (p - (j-2));
    y_interp = y_interp + (term * forward_diff(1,j)) / factorial(j-1);
end

% Display result
fprintf('Interpolated value at x = %.1f: %.4f\n', x_interp, y_interp);