#include <iostream>
using namespace std;
class Base1
{
public:
    void show()
    {
        cout << "Base1 print" << endl;
    }
};
class Base2
{
public:
    void show()
    {
        cout << "Base2 print" << endl;
    }
};
class Derived : public Base1, public Base2
{
public:
};
int main()
{
    Derived d;     
    d.Base1::show(); 
    d.Base2::show(); 
    return 0;
} 