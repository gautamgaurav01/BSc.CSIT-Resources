#include <iostream>
using namespace std;
template <class T>
class mypair
{
private:
    T a, b;

public:
    mypair(T first, T second)
    {
        a = first;
        b = second;
    }
    T getmax()
    {
        return a > b ? a : b;
    }
};
int main()
{
    mypair<float> m1(20.9, 20.1);
    cout << m1.getmax() << " is greater. " << endl;
    return 0;
} 