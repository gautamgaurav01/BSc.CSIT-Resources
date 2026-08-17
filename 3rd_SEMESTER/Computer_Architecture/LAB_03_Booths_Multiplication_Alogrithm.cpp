// LAB_03: Booth's Multiplication Algorithm (Signed, Step-by-Step)
#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    int M, Q;  // Multiplicand and Multiplier
    int n = 4; // Number of bits

    cout << "\t****** BOOTH'S MULTIPLICATION ******\n";

    // Input numbers (<16, can be negative)
    do
    {
        cout << "Enter multiplicand M (<16, can be negative): ";
        cin >> M;
        cout << "Enter multiplier Q (<16, can be negative): ";
        cin >> Q;
    } while (M <= -16 || M >= 16 || Q <= -16 || Q >= 16);

    int A = 0;        // Accumulator
    int Q_minus1 = 0; // Extra bit for Booth
    int count = n;
    int MQ = Q; // Q register

    cout << "\nExpected Product = " << M * Q << "\n\n";

    cout << "Step-by-step:\n";

    for (int step = 1; step <= n; step++)
    {
        int last_Q_bit = MQ & 1; // Q0

        // Decide operation
        if (last_Q_bit == Q_minus1)
        {
            cout << "Step " << step << ":\n";
            cout << "  No operation, just shift\n";
        }
        else if (last_Q_bit == 1 && Q_minus1 == 0)
        {
            cout << "Step " << step << ":\n";
            cout << "  A = A - M\n";
            A -= M;
        }
        else if (last_Q_bit == 0 && Q_minus1 == 1)
        {
            cout << "Step " << step << ":\n";
            cout << "  A = A + M\n";
            A += M;
        }

        // Print binary and decimal before shift
        cout << "  Before shift -> A: " << bitset<4>(A & 0xF)
             << " (" << A << ") Q: " << bitset<4>(MQ)
             << " (" << MQ << ") Q-1: " << Q_minus1 << "\n";

        // Arithmetic right shift (A,Q,Q-1)
        int combined = (A << n) | (MQ & 0xF); // Combine A and Q
        bool signA = (A < 0);
        combined >>= 1;
        if (signA)
            combined |= (1 << (2 * n - 1)); // Keep sign

        A = (combined >> n);
        MQ = combined & 0xF;
        Q_minus1 = last_Q_bit;

        // Print after shift
        cout << "  After shift  -> A: " << bitset<4>(A & 0xF)
             << " (" << A << ") Q: " << bitset<4>(MQ)
             << " (" << MQ << ") Q-1: " << Q_minus1 << "\n\n";
    }

    // Combine final product
    int product = (A << n) | (MQ & 0xF);

    cout << "Final Product (Binary): " << bitset<8>(product & 0xFF) << "\n";
    cout << "Final Product (Decimal): " << M * Q << "\n";

    return 0;
}