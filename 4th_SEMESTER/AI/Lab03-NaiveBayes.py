"""
Lab 03 - Implementation of Naive Bayes Classifier

We implement the Gaussian Naive Bayes algorithm from scratch
(no ML library used for the core algorithm) and test it on the
classic Iris flower dataset.

Naive Bayes uses Bayes' Theorem:
    P(class | features) proportional_to P(class) * P(features | class)
with the "naive" assumption that features are conditionally
independent given the class.
"""

import math
import random
from collections import defaultdict


def load_iris_dataset():
    """Load the Iris dataset using sklearn's built-in loader (data only)."""
    from sklearn.datasets import load_iris
    data = load_iris()
    X = data.data.tolist()          # feature vectors
    y = [data.target_names[t] for t in data.target]  # class labels as strings
    return X, y


def train_test_split(X, y, test_ratio=0.2, seed=42):
    random.seed(seed)
    indices = list(range(len(X)))
    random.shuffle(indices)
    split = int(len(X) * (1 - test_ratio))
    train_idx, test_idx = indices[:split], indices[split:]
    X_train = [X[i] for i in train_idx]
    y_train = [y[i] for i in train_idx]
    X_test = [X[i] for i in test_idx]
    y_test = [y[i] for i in test_idx]
    return X_train, X_test, y_train, y_test


class GaussianNaiveBayes:
    def fit(self, X, y):
        self.classes = sorted(set(y))
        self.priors = {}
        self.mean = {}
        self.var = {}

        # Group feature vectors by class
        grouped = defaultdict(list)
        for features, label in zip(X, y):
            grouped[label].append(features)

        n_total = len(y)
        n_features = len(X[0])

        for cls in self.classes:
            samples = grouped[cls]
            self.priors[cls] = len(samples) / n_total

            means, variances = [], []
            for f in range(n_features):
                values = [s[f] for s in samples]
                m = sum(values) / len(values)
                v = sum((val - m) ** 2 for val in values) / len(values)
                v = max(v, 1e-6)  # avoid division by zero
                means.append(m)
                variances.append(v)

            self.mean[cls] = means
            self.var[cls] = variances

    def _gaussian_pdf(self, x, mean, var):
        exponent = math.exp(-((x - mean) ** 2) / (2 * var))
        return (1 / math.sqrt(2 * math.pi * var)) * exponent

    def _class_log_likelihood(self, features, cls):
        log_prob = math.log(self.priors[cls])
        for x, m, v in zip(features, self.mean[cls], self.var[cls]):
            log_prob += math.log(self._gaussian_pdf(x, m, v) + 1e-12)
        return log_prob

    def predict_one(self, features):
        scores = {cls: self._class_log_likelihood(features, cls)
                  for cls in self.classes}
        return max(scores, key=scores.get)

    def predict(self, X):
        return [self.predict_one(features) for features in X]


def accuracy(y_true, y_pred):
    correct = sum(1 for t, p in zip(y_true, y_pred) if t == p)
    return correct / len(y_true)


if __name__ == "__main__":
    X, y = load_iris_dataset()
    X_train, X_test, y_train, y_test = train_test_split(X, y, test_ratio=0.3)

    model = GaussianNaiveBayes()
    model.fit(X_train, y_train)

    predictions = model.predict(X_test)
    acc = accuracy(y_test, predictions)

    print("Naive Bayes Classifier on Iris dataset")
    print("-" * 45)
    for i in range(min(10, len(X_test))):
        print(f"Sample {i+1}: Actual={y_test[i]:<12} Predicted={predictions[i]}")
    print("-" * 45)
    print(f"Accuracy on test set: {acc * 100:.2f}%")
