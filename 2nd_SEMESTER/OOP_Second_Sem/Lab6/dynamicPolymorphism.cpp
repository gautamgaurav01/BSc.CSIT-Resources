#include <iostream>
using namespace std;

class Base
{
public:
    virtual void show()
    {
        cout << "Base Class" << endl;
    }
};
class Derived : public Base
{
public:
    void show()
    {
        cout << "Derived Class" << endl;
    }
};
int main()
{
    Derived d;
    Base *b;
    b = &d;
    b->show();
    return 0;
}