"""
Lab 02 - Constraint Satisfaction Problem: Cryptarithmetic Problem

Classic puzzle:      S E N D
                  +   M O R E
                  -----------
                  M O N E Y

Each letter represents a unique digit (0-9). No leading letter can be 0.
Solved using backtracking search over letter-to-digit assignments.
"""

from itertools import permutations


def solve_send_more_money():
    letters = "SENDMORY"  # 8 unique letters -> 8 of the 10 digits

    for perm in permutations(range(10), len(letters)):
        mapping = dict(zip(letters, perm))

        # No leading zero for S, M
        if mapping['S'] == 0 or mapping['M'] == 0:
            continue

        send = (mapping['S'] * 1000 + mapping['E'] * 100 +
                mapping['N'] * 10 + mapping['D'])
        more = (mapping['M'] * 1000 + mapping['O'] * 100 +
                mapping['R'] * 10 + mapping['E'])
        money = (mapping['M'] * 10000 + mapping['O'] * 1000 +
                 mapping['N'] * 100 + mapping['E'] * 10 + mapping['Y'])

        if send + more == money:
            return mapping, send, more, money

    return None


def print_solution(mapping, send, more, money):
    if mapping is None:
        print("No solution found.")
        return

    print("Letter -> Digit mapping:")
    for letter in "SENDMORY":
        print(f"  {letter} = {mapping[letter]}")

    print(f"\n   {send:>5}   (SEND)")
    print(f" + {more:>5}   (MORE)")
    print(f" -------")
    print(f"  {money:>6}   (MONEY)")


if __name__ == "__main__":
    result = solve_send_more_money()
    if result:
        mapping, send, more, money = result
        print_solution(mapping, send, more, money)
    else:
        print("No solution found for SEND + MORE = MONEY")
