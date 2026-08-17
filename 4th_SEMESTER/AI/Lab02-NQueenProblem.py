"""
Lab 02 - Constraint Satisfaction Problem: N-Queens Problem (4-Queens)

Place N queens on an N x N chessboard so that no two queens attack
each other (no two in same row, column, or diagonal), solved using
backtracking.
"""


def is_safe(board, row, col, n):
    # Check this column on upper rows
    for i in range(row):
        if board[i] == col:
            return False
    # Check upper-left diagonal
    for i, j in zip(range(row - 1, -1, -1), range(col - 1, -1, -1)):
        if board[i] == j:
            return False
    # Check upper-right diagonal
    for i, j in zip(range(row - 1, -1, -1), range(col + 1, n)):
        if board[i] == j:
            return False
    return True


def solve_n_queens(n):
    solutions = []
    board = [-1] * n  # board[row] = column where queen is placed

    def backtrack(row):
        if row == n:
            solutions.append(board[:])
            return
        for col in range(n):
            if is_safe(board, row, col, n):
                board[row] = col
                backtrack(row + 1)
                board[row] = -1

    backtrack(0)
    return solutions


def print_board(solution, n):
    for row in range(n):
        line = ""
        for col in range(n):
            line += " Q " if solution[row] == col else " . "
        print(line)
    print()


if __name__ == "__main__":
    N = 4  # 4-Queens problem
    all_solutions = solve_n_queens(N)

    print(f"Total solutions found for {N}-Queens problem: {len(all_solutions)}\n")
    for idx, sol in enumerate(all_solutions, start=1):
        print(f"Solution {idx}: {sol}")
        print_board(sol, N)
