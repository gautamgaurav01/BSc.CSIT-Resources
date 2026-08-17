#include <iostream>
using namespace std;
class Rectangle
{
private:
    float length;
    float width;

public:
    Rectangle()
    {
        length = 0.0;
        width = 0.0;
    }
    Rectangle(float l, float w)
    {
        length = l;
        width = w;
    }
    void operator++()
    {
        length ++;
        width ++;
    }
    void showData()
    {
        cout << "Length: " << length << ", Width: " << width << endl;
    }
};

int main()
{
    Rectangle r1, r2(7.5, 4.2), r3(10.0, 6.0);
    ++r1;
    ++r2;
    ++r3;
    cout << "Rectangle 1:" << endl;
    r1.showData();
    cout << "\nRectangle 2:" << endl;
    r2.showData();
    cout << "\nRectangle 3:" << endl;
    r3.showData();
    return 0;
}