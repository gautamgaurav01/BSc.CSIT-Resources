// pointer
#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length, width;

public:
    Rectangle();
    Rectangle(int, int);
    void showData();
    int findArea();
};
int main()
{
    Rectangle *r1 = new Rectangle();
    Rectangle *r2 = new Rectangle(30, 40);

    r1->showData();
    r2->showData();
    cout << "Area 1: " << r1->findArea() << endl;
    cout << "Area 2: " << r2->findArea() << endl;
    return 0;
}
Rectangle::Rectangle()
{
    length = 0;
    width = 0;
}
Rectangle::Rectangle(int l, int w)
{
    length = l;
    width = w;
}
void Rectangle::showData()
{
    cout << "length: " << length << endl;
    cout << "width: " << width << endl;
}
int Rectangle::findArea()
{
    return length * width;
}