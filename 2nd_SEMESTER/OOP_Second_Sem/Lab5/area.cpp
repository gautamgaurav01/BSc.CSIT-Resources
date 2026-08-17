#include <iostream>
using namespace std;
class shape
{
protected:
    int height, width;

public:
    shape()
    {
        height = 0;
        width = 0;
    }
    shape(int h, int w)
    {
        height = h;
        width = w;
    }
};
class triangle : public shape
{
public:
    triangle(int h, int w) : shape(h, w) {}

    void area()
    {
        cout << "Area of triangle = " << 0.5 * height * width << endl;
    }
};
class rectangle : public shape
{
public:
    rectangle(int h, int w) : shape(h, w) {}

    void area()
    {
        cout << "Area of rectangle = " << height * width << endl;
    }
};
int main()
{
    triangle t(2, 3);
    rectangle r(10, 20);
    t.area();
    r.area();
    return 0;
}
