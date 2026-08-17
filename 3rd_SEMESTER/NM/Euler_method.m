fprintf('Gaurav Gautam\n');
% Define the ODE dy/dx = f(x, y)
f = @(x, y) x + y;
% Define initial condition
x0 = 0;
y0 = 1;
% Define the step size
h = 0.1;
% Define the final x value
x_final = 1;
% Initialize arrays to store x and y values
x_values = x0:h:x_final;
y_values = zeros(size(x_values));
y_values(1) = y0;
% Implement Euler's Method
for i = 1:length(x_values)-1
 y_values(i+1) = y_values(i) + h * f(x_values(i), y_values(i));
end
% Plot the numerical solution
plot(x_values, y_values, '-o');
xlabel('x');
ylabel('y');
title('Numerical Solution using Euler''s Method');
grid on;
