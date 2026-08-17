"""
Lab 08 (ii) - Program to illustrate the concept of Semantic Network

A semantic network represents knowledge as a directed graph where
nodes are concepts/objects and edges are labeled relationships
(e.g., "is-a", "has", "can", "part-of") between them.

We build a small semantic network about animals using the
`networkx` graph library, print its relationships, and demonstrate
simple inference by traversing "is-a" edges (property inheritance).
"""

import networkx as nx


def build_semantic_network():
    G = nx.DiGraph()

    # (subject, relation, object) triples
    edges = [
        ("Sparrow", "is-a", "Bird"),
        ("Penguin", "is-a", "Bird"),
        ("Bird", "is-a", "Animal"),
        ("Fish", "is-a", "Animal"),
        ("Salmon", "is-a", "Fish"),

        ("Bird", "has", "Feathers"),
        ("Bird", "has", "Wings"),
        ("Sparrow", "can", "Fly"),
        ("Penguin", "can", "Swim"),
        ("Fish", "has", "Gills"),
        ("Fish", "can", "Swim"),
        ("Animal", "can", "Move"),
        ("Animal", "has", "Cells"),
    ]

    for subj, rel, obj in edges:
        G.add_edge(subj, obj, relation=rel)

    return G


def print_network(G):
    print("Semantic Network - Relationships:")
    print("-" * 45)
    for u, v, data in G.edges(data=True):
        print(f"   {u:<10} --[{data['relation']}]--> {v}")


def infer_properties(G, concept):
    """
    Simple inference: gather all properties/abilities a concept has,
    either directly, or inherited from any ancestor connected via
    'is-a' edges (property inheritance in semantic networks).
    """
    properties = []

    # Direct relations (has / can) of the concept itself
    for _, target, data in G.out_edges(concept, data=True):
        if data["relation"] in ("has", "can"):
            properties.append((data["relation"], target))

    # Walk up the 'is-a' chain to inherit properties from ancestors
    current = concept
    visited = set()
    while True:
        parent = None
        for _, target, data in G.out_edges(current, data=True):
            if data["relation"] == "is-a" and target not in visited:
                parent = target
                break
        if parent is None:
            break
        visited.add(parent)
        for _, target, data in G.out_edges(parent, data=True):
            if data["relation"] in ("has", "can"):
                properties.append((data["relation"], target, f"(inherited from {parent})"))
        current = parent

    return properties


if __name__ == "__main__":
    G = build_semantic_network()
    print_network(G)

    for concept in ["Sparrow", "Penguin", "Salmon"]:
        print(f"\nInferred properties of '{concept}' "
              f"(direct + inherited via 'is-a'):")
        print("-" * 55)
        props = infer_properties(G, concept)
        for p in props:
            print("   ", p)
