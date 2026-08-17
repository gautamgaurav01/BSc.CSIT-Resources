#include <iostream>
using namespace std;
class Polygon
{
protected:
    int width, height;

public:
    void setData(int a, int b)
    {
        width = a;
        height = b;
    }
    virtual int Area() = 0;
};
class Rectangle : public Polygon
{
public:
    int Area()
    {
        cout << "Area of Rectangle:" << (width * height) << endl;
        return 0;
    }
};
class Triangle : public Polygon
{
public:
    int Area()
    {
        cout << "Area of Triangle:" << (width * height) / 2 << endl;
        return 0;
    }
};
int main()
{
    Polygon *p;
    Rectangle r;
    Triangle t;
    p = &r;
    p->setData(10, 20);
    p->Area();
    p = &t;
    p->setData(10, 20);
    p->Area();
    return 0;
}