/* #include<iostream>
using namespace std;
class Rectangle
{
    private:
    int length,breadth;
    public:
    Rectangle(int,int);
    ~Rectangle();
    int operator++();
    void display();
};
int main ()
{
    Rectangle r1(10,20),r2(30,40),r3(50,60);
    ++r1;
    ++r2;
    ++r3;
    cout << "Rectangle 1:" << endl;
    r1.display();
    cout << "\nRectangle 2:" << endl;
    r2.display();
    cout << "\nRectangle 3:" << endl;
    r3.display();
    return 0;
}

Rectangle::Rectangle(int l, int b)
{
    length = l;
    breadth = b;
}
Rectangle::~Rectangle()
{
   cout<<"Memory deallocated"<<endl;
}
int Rectangle::operator++()
{
    length++;
    breadth++;
}
void Rectangle::display()
{
    cout << "Length: " << length << ", Breadth: " << breadth << endl;
} */



//program to add distance and inches 
#include<iostream>
using namespace std;
class Distance
{
private:
    int feet, inches;
public:
Distance() {}
    Distance(int f, int i)
    {
        feet = f;
        inches = i;
    }
     /* void addDistance(Distance d1, Distance d2)
    {
        feet= d1.feet + d2.feet;
        inches = d1.inches + d2.inches;
        feet=feet + inches / 12; 
        inches = inches % 12;
    } */
   /* Distance addDistance (Distance d1, Distance d2) 
   {
    feet = d1.feet + d2.feet;
    inches = d1.inches + d2.inches; 
    feet = feet + inches / 12;
    inches = inches % 12;
    return Distance(feet, inches);
   } */
  Distance operator +(Distance d)
  {
    Distance dist;
    dist.feet = feet + d.feet;
    dist.inches = inches + d.inches;
    dist.feet += dist.inches / 12; 
    dist.inches = dist.inches % 12; 
    return dist;
  }
    void showData()
    {
        cout << feet <<" "  << "Feet" <<" " << inches<<" " << "Inches"<<endl;
    }
};
int main()
{
    Distance d1(5, 8),d2(3, 10),d3,d4(2, 6);
    // d3.addDistance(d1,d2);
    d3 = d1 + d2+ d4;
    d3.showData();
    return 0;
}