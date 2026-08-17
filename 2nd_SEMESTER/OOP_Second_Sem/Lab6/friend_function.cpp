#include <iostream>
using namespace std;
class Test
{
private:
    int x;

protected:
    int y;

public:
    int z;
    friend void show(Test t);
};
void show(Test t)
{
    t.x = 10;
    cout << "X:" << t.x << endl;
    t.y = 20;
    cout << "Y:" << t.y << endl;
    t.z = 30;
    cout << "Z:" << t.z << endl;
}

int main()
{
    Test t;
    show(t);
    return 0;
}