#include <iostream>
using namespace std;
class map1
{
private:
    int feet, inches;

public:
    map1();
    map1(int, int);
    void display();
};
class map2
{
private:
    int meter, centimeter;

public:
    map2();
    map2(int, int);
    operator map1();
};
int main()
{
    map2 m2(5,40);
    map1 m1;
    m1 = m2;
    m1.display();
}
map2::map2() {}
map2::map2(int m, int c)
{
    meter = m;
    centimeter = c;
}
map2::operator map1()
{
    int f, i;
    f = meter * 3.3;
    i = centimeter * 0.4;

    f = f + i / 12;
    i = i % 12;
    return map1(f, i);
}

map1::map1() {}
map1::map1(int f, int i)
{
    feet = f;
    inches = i;
}
void map1::display()
{
    cout << "Feet: " << feet << ", Inches: " << inches << endl;
}