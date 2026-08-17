#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter two values" << endl;
    cin >> a >> b;
    try
    {
        if (b == 0)
            throw b;
        else
            cout << "Result is " << a / b << endl;
    }
    catch (int b)
    {
        cout << b << " is the exception " << endl;
    }
    cout << "hello";
    return 0;
}