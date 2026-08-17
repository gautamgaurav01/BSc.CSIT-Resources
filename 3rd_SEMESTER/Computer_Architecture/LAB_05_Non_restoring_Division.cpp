
// LAB_05 Non-Restoring Division

#include <iostream>
#include <bitset>
using namespace std;

int A = 0, Q, M;
int n = 4;

void shiftLeft()
{
    A = A << 1;

    if (Q & 8)
        A = A | 1;

    Q = (Q << 1) & 15;

    cout << "\nAfter SHIFT LEFT";
    cout << "\nA: " << bitset<5>(A) << "  Q: " << bitset<5>(Q);
}

void operation()
{
    if (A >= 0)
    {
        A = A - M;
        cout << "\nA >= 0 -> A = A - M";
    }
    else
    {
        A = A + M;
        cout << "\nA < 0 -> A = A + M";
    }

    cout << "\nA: " << bitset<5>(A);

    if (A >= 0)
    {
        Q = Q | 1;
        cout << "\nSet Q0 = 1";
    }
    else
    {
        Q = Q & 14;
        cout << "\nSet Q0 = 0";
    }

    cout << "\nA: " << bitset<5>(A) << "  Q: " << bitset<5>(Q);
}

void nonRestoringDivision()
{
    for (int i = 0; i < n; i++)
    {
        cout << "\n-------------------------";
        cout << "\nStep " << i + 1;

        shiftLeft();
        operation();

        cout << endl;
    }

    if (A < 0)
    {
        cout << "\nA negative -> Final Restore (A = A + M)";
        A = A + M;
    }
}

int main()
{
    cout << "\n\t***** NON-RESTORING DIVISION *****\n";

    cout << "\nEnter dividend (<16): ";
    cin >> Q;

    cout << "Enter divisor (<16): ";
    cin >> M;

    if (M == 0)
    {
        cout << "Division by zero not allowed";
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

    nonRestoringDivision();

    cout << "\n============================";
    cout << "\nFinal Quotient  : " << bitset<5>(Q);
    cout << "\nFinal Remainder : " << bitset<5>(A);

    cout << "\n\nDecimal Quotient  : " << Q;
    cout << "\nDecimal Remainder : " << A << endl;

    return 0;
}
