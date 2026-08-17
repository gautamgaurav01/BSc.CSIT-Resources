#include <iostream>
using namespace std;
class base
{
public:
    void show()
    {
        cout << "Base 1 print" << endl;
    }
};
class derived : public base
{
public:
    void show()
    {
        cout << "derived 1 print" << endl;
    }
};
int main()
{
    derived d;
    d.show();
    d.base::show();
    return 0;
}