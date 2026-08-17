#include <iostream>
using namespace std;
class Base
{
private:
    int x;

protected:
    int y;

public:
    int z;
};
class Derived : public Base
{
public:
    void getdata()
    {
        cout << "Enter x, y, z" << endl;
        // cin >> x; //error: 'int Base::x' is private within this context
        cin >> y >> z;
    }
};  
int main()
{
    Derived d;
    d.getdata();
    //cout << "x= " << d.x << endl; //error: 'int Base::x' is private within this context
    //cout << "y= " << d.y << endl; //error: 'int Base::y' is protected within this context
    cout << "z= " << d.z << endl;
    return 0;
}