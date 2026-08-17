"""
Lab 04 - Implementation of Backpropagation Algorithm

A simple feed-forward neural network (1 hidden layer) trained using
the backpropagation algorithm, implemented from scratch using NumPy.
Demonstrated on the XOR problem (a classic non-linearly separable
problem that requires backpropagation / hidden layers to solve).
"""

import numpy as np


def sigmoid(x):
    return 1 / (1 + np.exp(-x))


def sigmoid_derivative(x):
    # x here is already sigmoid(x), so derivative = x * (1 - x)
    return x * (1 - x)


class NeuralNetwork:
    def __init__(self, input_size, hidden_size, output_size, lr=0.5, seed=1):
        rng = np.random.default_rng(seed)
        # Weight initialization
        self.W1 = rng.uniform(-1, 1, (input_size, hidden_size))
        self.b1 = np.zeros((1, hidden_size))
        self.W2 = rng.uniform(-1, 1, (hidden_size, output_size))
        self.b2 = np.zeros((1, output_size))
        self.lr = lr

    def forward(self, X):
        self.z1 = X @ self.W1 + self.b1
        self.a1 = sigmoid(self.z1)          # hidden layer activations
        self.z2 = self.a1 @ self.W2 + self.b2
        self.a2 = sigmoid(self.z2)          # output layer activations
        return self.a2

    def backward(self, X, y, output):
        # ----- Error at output layer -----
        error_output = y - output
        delta_output = error_output * sigmoid_derivative(output)

        # ----- Error at hidden layer (propagated backwards) -----
        error_hidden = delta_output @ self.W2.T
        delta_hidden = error_hidden * sigmoid_derivative(self.a1)

        # ----- Update weights and biases (gradient ascent on -error) -----
        self.W2 += self.a1.T @ delta_output * self.lr
        self.b2 += np.sum(delta_output, axis=0, keepdims=True) * self.lr
        self.W1 += X.T @ delta_hidden * self.lr
        self.b1 += np.sum(delta_hidden, axis=0, keepdims=True) * self.lr

        return np.mean(np.square(error_output))  # mean squared error

    def train(self, X, y, epochs=10000, print_every=1000):
        for epoch in range(1, epochs + 1):
            output = self.forward(X)
            loss = self.backward(X, y, output)
            if epoch % print_every == 0 or epoch == 1:
                print(f"Epoch {epoch:>6} | Loss (MSE): {loss:.6f}")

    def predict(self, X):
        return self.forward(X)


if __name__ == "__main__":
    # XOR truth table
    X = np.array([[0, 0],
                  [0, 1],
                  [1, 0],
                  [1, 1]])
    y = np.array([[0],
                  [1],
                  [1],
                  [0]])

    nn = NeuralNetwork(input_size=2, hidden_size=4, output_size=1, lr=0.5)
    nn.train(X, y, epochs=10000, print_every=1000)

    print("\nFinal predictions after training (XOR problem):")
    print("-" * 45)
    predictions = nn.predict(X)
    for inputs, actual, predicted in zip(X, y, predictions):
        print(f"Input: {inputs} | Actual: {actual[0]} | "
              f"Predicted: {predicted[0]:.4f} -> {round(predicted[0])}")
