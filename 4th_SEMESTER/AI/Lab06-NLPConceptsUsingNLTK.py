"""
Lab 06 - Program to illustrate concepts of NLP using NLTK

Demonstrates the following fundamental NLP preprocessing steps:
    1. Sentence Tokenization
    2. Word Tokenization
    3. Stopword Removal
    4. Stemming (Porter Stemmer)
    5. Lemmatization (WordNet Lemmatizer)
    6. Part-of-Speech (POS) Tagging

Run once with internet access so NLTK can download the required
corpora/models (punkt, stopwords, wordnet, averaged_perceptron_tagger).
"""

import nltk

# Ensure the required NLTK resources are available
for resource in ["punkt", "punkt_tab", "stopwords", "wordnet",
                  "averaged_perceptron_tagger", "averaged_perceptron_tagger_eng"]:
    try:
        nltk.data.find(resource)
    except LookupError:
        nltk.download(resource, quiet=True)

from nltk.tokenize import sent_tokenize, word_tokenize
from nltk.corpus import stopwords
from nltk.stem import PorterStemmer, WordNetLemmatizer

TEXT = ("Artificial Intelligence is transforming the world. "
        "Natural Language Processing helps machines understand "
        "and generate human language efficiently.")


def demonstrate_nlp(text):
    print("Original Text:")
    print(text)
    print("=" * 70)

    # 1. Sentence Tokenization
    sentences = sent_tokenize(text)
    print(f"\n1. Sentence Tokenization ({len(sentences)} sentence(s)):")
    for i, s in enumerate(sentences, 1):
        print(f"   {i}. {s}")

    # 2. Word Tokenization
    words = word_tokenize(text)
    print(f"\n2. Word Tokenization ({len(words)} tokens):")
    print(f"   {words}")

    # 3. Stopword Removal
    stop_words = set(stopwords.words("english"))
    filtered_words = [w for w in words if w.lower() not in stop_words and w.isalnum()]
    print(f"\n3. After Stopword Removal ({len(filtered_words)} tokens):")
    print(f"   {filtered_words}")

    # 4. Stemming
    stemmer = PorterStemmer()
    stemmed_words = [stemmer.stem(w) for w in filtered_words]
    print(f"\n4. Stemming (Porter Stemmer):")
    print(f"   {stemmed_words}")

    # 5. Lemmatization
    lemmatizer = WordNetLemmatizer()
    lemmatized_words = [lemmatizer.lemmatize(w) for w in filtered_words]
    print(f"\n5. Lemmatization (WordNet Lemmatizer):")
    print(f"   {lemmatized_words}")

    # 6. Part-of-Speech Tagging
    pos_tags = nltk.pos_tag(words)
    print(f"\n6. Part-of-Speech (POS) Tagging:")
    print(f"   {pos_tags}")


if __name__ == "__main__":
    demonstrate_nlp(TEXT)
