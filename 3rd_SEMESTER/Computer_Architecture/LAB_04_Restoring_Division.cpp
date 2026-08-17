// LAB_04 Restoring Division Algorithm

#include <iostream>
#include <bitset>
using namespace std;

int A = 0; // Accumulator
int Q;     // Dividend / Quotient
int M;     // Divisor
int n = 4; // number of bits

// Function to shift left (A,Q)
void shiftLeft()
{
    A = A << 1;
    if (Q & 8) // MSB of Q moves to LSB of A
        A = A | 1;

    Q = (Q << 1) & 15; // Keep Q as 4 bits

    cout << "\nAfter SHIFT LEFT";
    cout << "\nA: " << bitset<5>(A) << "  Q: " << bitset<5>(Q);
}

// Function to subtract M from A and restore if negative
void subtractRestore()
{
    A = A - M;
    cout << "\nAfter A = A - M";
    cout << "\nA: " << bitset<5>(A);

    if (A < 0)
    {
        cout << "\nA negative -> Restore";
        Q = Q & 14; // Q0 = 0
        A = A + M;
    }
    else
    {
        cout << "\nA positive -> Q0 = 1";
        Q = Q | 1; // Q0 = 1
    }

    cout << "\nA: " << bitset<5>(A) << "  Q: " << bitset<5>(Q) << endl;
}

// Function to perform the restoring division steps
void restoringDivision()
{
    for (int i = 0; i < n; i++)
    {
        cout << "\n-------------------------";
        cout << "\nStep " << i + 1;

        shiftLeft();
        subtractRestore();
    }
}

int main()
{
    cout << "\n\t***** RESTORING DIVISION *****\n";

    cout << "\nEnter dividend (<16): ";
    cin >> Q;

    cout << "Enter divisor (<16): ";
    cin >> M;

    if (M == 0)
    {
        cout << "\nDivision by zero is not allowed.\n";
        return 0;
    }

    int dividend = Q;
    int divisor = M;

    cout << "\nExpected Quotient: " << dividend / divisor;
    cout << "\nExpected Remainder: " << dividend % divisor << endl;

    cout << "\nInitial Registers\n";
    cout << "A: " << bitset<5>(A) << endl;
    cout << "Q: " << bitset<5>(Q) << endl;
    cout << "M: " << bitset<5>(M) << endl;

    restoringDivision(); // Run the algorithm

    cout << "\n============================";
    cout << "\nFinal Quotient  : " << bitset<5>(Q);
    cout << "\nFinal Remainder : " << bitset<5>(A);

    cout << "\n\nDecimal Quotient  : " << Q;
    cout << "\nDecimal Remainder : " << A << endl;

    return 0;
}