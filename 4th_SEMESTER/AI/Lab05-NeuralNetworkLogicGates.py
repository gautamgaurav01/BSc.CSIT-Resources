"""
Lab 05 - Implementation of Neural Networks for realization of Logic Gates

Part 1: A single-layer Perceptron implements linearly separable
         gates: AND, OR, NOT, NAND, NOR.
Part 2: A small Multi-Layer Perceptron (with backpropagation, reusing
         the same idea as Lab 4) implements XOR, which a single
         perceptron CANNOT represent (not linearly separable).
"""

import numpy as np


# ---------------------------------------------------------------------
# PART 1: Single-layer Perceptron for linearly separable gates
# ---------------------------------------------------------------------
class Perceptron:
    def __init__(self, input_size, lr=0.1, epochs=20):
        self.weights = np.zeros(input_size)
        self.bias = 0.0
        self.lr = lr
        self.epochs = epochs

    def activation(self, x):
        return 1 if x >= 0 else 0

    def predict(self, x):
        z = np.dot(self.weights, x) + self.bias
        return self.activation(z)

    def train(self, X, y):
        for _ in range(self.epochs):
            for xi, target in zip(X, y):
                prediction = self.predict(xi)
                error = target - prediction
                self.weights += self.lr * error * np.array(xi)
                self.bias += self.lr * error


def run_perceptron_gate(name, X, y):
    p = Perceptron(input_size=len(X[0]), lr=0.1, epochs=20)
    p.train(X, y)
    print(f"\n{name} Gate (Single-Layer Perceptron)")
    print("-" * 40)
    for xi in X:
        print(f"Input: {xi} -> Output: {p.predict(xi)}")


# ---------------------------------------------------------------------
# PART 2: Multi-Layer Perceptron (with backpropagation) for XOR gate
# ---------------------------------------------------------------------
def sigmoid(x):
    return 1 / (1 + np.exp(-x))


def sigmoid_derivative(a):
    return a * (1 - a)


class MLP:
    def __init__(self, input_size, hidden_size, output_size, lr=0.5, seed=1):
        rng = np.random.default_rng(seed)
        self.W1 = rng.uniform(-1, 1, (input_size, hidden_size))
        self.b1 = np.zeros((1, hidden_size))
        self.W2 = rng.uniform(-1, 1, (hidden_size, output_size))
        self.b2 = np.zeros((1, output_size))
        self.lr = lr

    def forward(self, X):
        self.a1 = sigmoid(X @ self.W1 + self.b1)
        self.a2 = sigmoid(self.a1 @ self.W2 + self.b2)
        return self.a2

    def train(self, X, y, epochs=10000):
        for _ in range(epochs):
            output = self.forward(X)
            error_output = y - output
            delta_output = error_output * sigmoid_derivative(output)

            error_hidden = delta_output @ self.W2.T
            delta_hidden = error_hidden * sigmoid_derivative(self.a1)

            self.W2 += self.a1.T @ delta_output * self.lr
            self.b2 += np.sum(delta_output, axis=0, keepdims=True) * self.lr
            self.W1 += X.T @ delta_hidden * self.lr
            self.b1 += np.sum(delta_hidden, axis=0, keepdims=True) * self.lr

    def predict(self, X):
        return self.forward(X)


def run_xor_gate():
    X = np.array([[0, 0], [0, 1], [1, 0], [1, 1]])
    y = np.array([[0], [1], [1], [0]])

    mlp = MLP(input_size=2, hidden_size=4, output_size=1, lr=0.5)
    mlp.train(X, y, epochs=10000)

    print("\nXOR Gate (Multi-Layer Perceptron with Backpropagation)")
    print("-" * 55)
    predictions = mlp.predict(X)
    for xi, out in zip(X, predictions):
        print(f"Input: {xi} -> Output: {round(out[0])}  (raw: {out[0]:.4f})")


if __name__ == "__main__":
    # Truth tables for linearly separable gates
    X2 = [[0, 0], [0, 1], [1, 0], [1, 1]]

    run_perceptron_gate("AND",  X2, [0, 0, 0, 1])
    run_perceptron_gate("OR",   X2, [0, 1, 1, 1])
    run_perceptron_gate("NAND", X2, [1, 1, 1, 0])
    run_perceptron_gate("NOR",  X2, [1, 0, 0, 0])

    X1 = [[0], [1]]
    run_perceptron_gate("NOT", X1, [1, 0])

    # XOR requires a multi-layer network
    run_xor_gate()
