"""
Lab 02 - Constraint Satisfaction Problem: Water Jug Problem

Given two jugs of capacity `cap1` and `cap2` (with no measuring marks),
find a sequence of steps to measure exactly `target` liters of water,
using a Breadth-First Search over the state space (x, y) where
x = amount of water in jug1, y = amount of water in jug2.
"""

from collections import deque


def water_jug_bfs(cap1, cap2, target):
    start = (0, 0)
    visited = {start}
    # queue holds tuples: (state, path_to_reach_state)
    queue = deque([(start, [start])])

    while queue:
        (x, y), path = queue.popleft()

        if x == target or y == target:
            return path

        # All possible next states from (x, y)
        next_states = [
            (cap1, y),              # Fill jug1
            (x, cap2),              # Fill jug2
            (0, y),                 # Empty jug1
            (x, 0),                 # Empty jug2
            (x - min(x, cap2 - y), y + min(x, cap2 - y)),  # Pour jug1 -> jug2
            (x + min(y, cap1 - x), y - min(y, cap1 - x)),  # Pour jug2 -> jug1
        ]

        for state in next_states:
            if state not in visited:
                visited.add(state)
                queue.append((state, path + [state]))

    return None  # No solution found


def print_solution(path, cap1, cap2, target):
    if path is None:
        print(f"No solution exists to measure {target} liters "
              f"with jugs of capacity {cap1} and {cap2}.")
        return

    print(f"Solution to measure {target} liters using jugs of "
          f"capacity {cap1} and {cap2}:\n")
    print(f"{'Jug1':>6} {'Jug2':>6}")
    for (x, y) in path:
        print(f"{x:>6} {y:>6}")
    print(f"\nReached target of {target} liters in {len(path) - 1} step(s).")


if __name__ == "__main__":
    CAP1, CAP2, TARGET = 4, 3, 2   # Classic example: 4L and 3L jugs, target 2L
    solution_path = water_jug_bfs(CAP1, CAP2, TARGET)
    print_solution(solution_path, CAP1, CAP2, TARGET)
