fprintf('Gaurav Gautam\n');
% Define the coefficient matrix A and the right-hand side vector b
A = [2, -1, 1; -1, 3, -1; 1, -1, 2];
b = [2; 4; 2];
% Perform Gaussian Elimination
n = size(A, 1); % Number of equations/unknowns
for k = 1:n-1
 for i = k+1:n
 factor = A(i,k) / A(k,k);
 A(i,k+1:n) = A(i,k+1:n) - factor * A(k,k+1:n);
 b(i) = b(i) - factor * b(k);
 end
end
% Back substitution
x = zeros(n, 1);
x(n) = b(n) / A(n,n);
for i = n-1:-1:1
 x(i) = (b(i) - A(i,i+1:n)*x(i+1:n)) / A(i,i);
end
% Display the solution
disp('Solution using Gaussian Elimination:');
disp(x);