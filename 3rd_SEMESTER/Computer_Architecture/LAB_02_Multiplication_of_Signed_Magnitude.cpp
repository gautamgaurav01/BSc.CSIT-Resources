// LAB_02: Signed Magnitude Multiplication Algorithm using Functions
#include <iostream>
#include <cmath>
#include <bitset>
using namespace std;

int Q, B;           // Multiplicand (B) and Multiplier (Q)
int ACC[4] = {0};   // Accumulator
int B_bin[4] = {0}; // Binary of B
int Q_bin[4] = {0}; // Binary of Q
int RES[4] = {0};
int C = 0, E = 0;
int SC = 0; // Step counter

// Convert decimal to 4-bit binary arrays
void toBinary()
{
    int b_abs = abs(B);
    int q_abs = abs(Q);

    for (int i = 0; i < 4; i++)
    {
        B_bin[i] = b_abs % 2;
        b_abs /= 2;
        Q_bin[i] = q_abs % 2;
        q_abs /= 2;
    }
    SC = 4; // number of bits
}

// Add binary B to ACC
void addBtoACC()
{
    C = 0;
    for (int i = 0; i < 4; i++)
    {
        RES[i] = ACC[i] + B_bin[i] + C;
        if (RES[i] >= 2)
            C = 1;
        else
            C = 0;
        E = C;
        RES[i] %= 2;
    }

    // Update ACC
    for (int i = 0; i < 4; i++)
        ACC[i] = RES[i];

    // Print step
    cout << "  ACC: ";
    for (int i = 3; i >= 0; i--)
        cout << ACC[i];
    cout << " : Q: ";
    for (int i = 3; i >= 0; i--)
        cout << Q_bin[i];
    cout << endl;
}

// Right shift ACC and Q
void rShift()
{
    int temp = ACC[0];
    for (int i = 0; i < 3; i++)
        ACC[i] = ACC[i + 1];
    ACC[3] = E;
    E = 0;

    for (int i = 0; i < 3; i++)
        Q_bin[i] = Q_bin[i + 1];
    Q_bin[3] = temp;

    // Print step
    cout << "  R-SHIFT: ACC: ";
    for (int i = 3; i >= 0; i--)
        cout << ACC[i];
    cout << " : Q: ";
    for (int i = 3; i >= 0; i--)
        cout << Q_bin[i];
    cout << endl;
}

// Main multiplication process
void multiply()
{
    while (SC != 0)
    {
        cout << "Step SC=" << SC << " -> ";
        if (Q_bin[0] == 1)
        {
            cout << "Adding B to ACC" << endl;
            addBtoACC();
        }
        else
        {
            cout << "No addition, just shift" << endl;
        }
        rShift();
        SC--;
        cout << endl;
    }
}

int main()
{
    cout << "\t\t****** SIGNED MAGNITUDE MULTIPLICATION ******\n\n";

    cout << "Enter multiplicand B (<16): ";
    cin >> B;
    cout << "Enter multiplier Q (<16): ";
    cin >> Q;

    int expected = B * Q;
    cout << "\nExpected Product = " << expected << endl;

    toBinary();

    cout << "\nBinary Equivalents:" << endl;
    cout << "B: ";
    for (int i = 3; i >= 0; i--)
        cout << B_bin[i];
    cout << "\nQ: ";
    for (int i = 3; i >= 0; i--)
        cout << Q_bin[i];
    cout << "\n\n";

    multiply();

    // Print final product in binary
    cout << "Final Product (Binary): ";
    if ((B < 0 && Q > 0) || (B > 0 && Q < 0))
        cout << "-"; // signed magnitude
    for (int i = 3; i >= 0; i--)
        cout << ACC[i];
    for (int i = 3; i >= 0; i--)
        cout << Q_bin[i];
    cout << endl;

    // Print final product in decimal
    int binary_product = 0;
    for (int i = 0; i < 4; i++)
        binary_product = binary_product * 2 + ACC[i];
    for (int i = 0; i < 4; i++)
        binary_product = binary_product * 2 + Q_bin[i];

    int final_product = ((B < 0) ^ (Q < 0)) ? -binary_product : binary_product;

    cout << "Final Product (Decimal): " << final_product << endl;

    return 0;
}