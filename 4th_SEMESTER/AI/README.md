# Artificial Intelligence Lab — BSCCSIT 4th Semester

Python implementations for all AI Lab programs listed in the syllabus.

## Files

| File | Program |
|---|---|
| `Lab01-SimpleIntelligentAgent.py` | Simple reflex intelligent agent (vacuum-cleaner world) |
| `Lab02-WaterJugProblem.py` | Water Jug problem (BFS state-space search) |
| `Lab02-NQueenProblem.py` | 4-Queens problem (backtracking CSP) |
| `Lab02-CryptarithmeticProblem.py` | Cryptarithmetic problem: SEND + MORE = MONEY (backtracking CSP) |
| `Lab03-NaiveBayes.py` | Naive Bayes classifier (Gaussian NB from scratch, tested on Iris dataset) |
| `Lab04-Backpropagation.py` | Backpropagation algorithm from scratch (NumPy), trained on XOR |
| `Lab05-NeuralNetworkLogicGates.py` | Neural networks for logic gates — Perceptron (AND/OR/NAND/NOR/NOT) + MLP (XOR) |
| `Lab06-NLPConceptsUsingNLTK.py` | NLP concepts using NLTK — tokenization, stopword removal, stemming, lemmatization, POS tagging |
| `Lab07-ExpertSystemWeatherForecasting.py` | Rule-based expert system for weather forecasting (forward chaining) |
| `Lab08-PredicateLogic.py` | Predicate logic demonstration (manual inference + SymPy propositional logic check) |
| `Lab08-SemanticNetwork.py` | Semantic network demonstration (NetworkX graph with property inheritance) |
| `requirements.txt` | Python package dependencies |

## Requirements

- Python 3.9+
- Install dependencies:

  ```bash
  pip install -r requirements.txt
  ```

Standard-library-only programs (no extra installs needed): `Lab01`, `Lab02-*`, `Lab07`.

## How to Run

Each file is standalone — run it directly with Python:

```bash
python3 Lab01-SimpleIntelligentAgent.py
python3 Lab02-WaterJugProblem.py
python3 Lab02-NQueenProblem.py
python3 Lab02-CryptarithmeticProblem.py
python3 Lab03-NaiveBayes.py
python3 Lab04-Backpropagation.py
python3 Lab05-NeuralNetworkLogicGates.py
python3 Lab06-NLPConceptsUsingNLTK.py
python3 Lab07-ExpertSystemWeatherForecasting.py
python3 Lab08-PredicateLogic.py
python3 Lab08-SemanticNetwork.py
```

### Note on Lab06 (NLTK)

The first time you run `Lab06-NLPConceptsUsingNLTK.py`, it needs internet
access to download NLTK's corpora/models. The script does this
automatically, but you can also pre-fetch them manually:

```bash
python3 -c "import nltk; nltk.download('punkt'); nltk.download('punkt_tab'); nltk.download('stopwords'); nltk.download('wordnet'); nltk.download('averaged_perceptron_tagger'); nltk.download('averaged_perceptron_tagger_eng')"
```

## Notes

- **Lab02** covers all three CSP examples (Water Jug, 4-Queens,
  Cryptarithmetic) as separate scripts for clarity.
- **Lab03** trains/tests on the classic Iris dataset (loaded via
  `sklearn.datasets`) but the Naive Bayes math itself is implemented
  from scratch, not imported from a library.
- **Lab04** and **Lab05**'s XOR network share the same backpropagation
  approach; Lab05 additionally shows a single-layer Perceptron for the
  linearly separable gates (AND, OR, NAND, NOR, NOT).
- **Lab08** is split into two files matching the two sub-parts of the
  question: (i) Predicate Logic and (ii) Semantic Network.
- All programs print their working/output to the console so results
  can be observed and screenshotted directly for lab reports.
