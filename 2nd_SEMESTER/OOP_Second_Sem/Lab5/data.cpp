#include <iostream>
using namespace std;
class A
{
protected:
    int adata;

public:
    A(int a)
    {
        adata = a;
    }
};
class B : public A
{
private:
    int bdata;

public:
    B(int a, int b) : A(a)
    {
        bdata = b;
    }
    void showData()
    {
        cout << "A = " << adata << endl
             << "B = " << bdata << endl;
    }
};
int main()
{
    B b(3, 5);
    b.showData();
    return 0;
}