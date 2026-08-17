"""
Lab 08 (i) - Program to illustrate the concept of Predicate Logic

We represent simple first-order predicate logic statements about a
domain of people, define predicates such as Human(x) and Mortal(x),
and use them to perform logical inference (e.g., the classic
syllogism: "All humans are mortal. Socrates is a human.
Therefore, Socrates is mortal.")

Two demonstrations:
 A. A manual/programmatic inference engine using Python sets and
    functions to model predicates and a simple forward-chaining rule.
 B. Using the `sympy` symbolic logic library to build and evaluate
    a first-order-logic-style implication with propositional truth
    values (illustrative use of quantifiers via iteration, since
    plain propositional logic in sympy doesn't have quantifiers).
"""

from sympy import symbols, Implies, And, satisfiable


# ---------------------------------------------------------------------
# Part A: Predicate logic modeled directly with Python
# ---------------------------------------------------------------------
def predicate_logic_demo():
    # Domain of discourse
    people = ["Socrates", "Plato", "Aristotle", "Rex"]

    # Predicate Human(x): set of people who are human
    Human = {"Socrates", "Plato", "Aristotle"}

    # Rule (Universal Quantification):
    # For all x, Human(x) -> Mortal(x)
    def Mortal(x):
        return x in Human   # derived predicate via the rule above

    print("Domain: ", people)
    print("Human(x) predicate is TRUE for:", Human)

    print("\nApplying rule:  For all x, Human(x) -> Mortal(x)")
    print("-" * 55)
    for person in people:
        h = person in Human
        m = Mortal(person)
        print(f"Human({person}) = {h:<5}  =>  Mortal({person}) = {m}")

    # Existential quantification example:
    # There exists an x such that Human(x) AND Mortal(x)
    exists_mortal_human = any(Mortal(p) and p in Human for p in people)
    print(f"\nExists x : Human(x) ^ Mortal(x)  ->  {exists_mortal_human}")


# ---------------------------------------------------------------------
# Part B: Using sympy to check logical validity of an inference rule
# ---------------------------------------------------------------------
def sympy_logic_demo():
    Human, Mortal = symbols("Human Mortal")

    # Premise 1: Human -> Mortal   (All humans are mortal)
    premise1 = Implies(Human, Mortal)
    # Premise 2: Human is True     (Socrates is a human)
    premise2 = Human

    knowledge_base = And(premise1, premise2)

    # Conclusion to verify: Mortal must be True
    # We check validity by seeing if KB AND NOT(Conclusion) is unsatisfiable
    from sympy import Not
    test = And(knowledge_base, Not(Mortal))
    result = satisfiable(test)

    print("\nSymPy Propositional Logic Check")
    print("-" * 55)
    print("Knowledge Base: Human -> Mortal,  Human = True")
    print("Testing entailment of 'Mortal'...")
    if result is False:
        print("Result: The knowledge base ENTAILS 'Mortal' is True. "
              "(No model exists where Mortal is False)")
    else:
        print("Result: 'Mortal' is NOT entailed. Counter-model:", result)


if __name__ == "__main__":
    predicate_logic_demo()
    sympy_logic_demo()
