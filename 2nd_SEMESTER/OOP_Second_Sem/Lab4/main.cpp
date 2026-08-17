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
     void addDistance(Distance d1, Distance d2)
    {
        feet= d1.feet + d2.feet;
        inches = d1.inches + d2.inches;
        feet=feet + inches / 12; 
        inches = inches % 12;
    }
    void showData()
    {
        cout << "Feet: " << feet << endl;
        cout << "Inches: " << inches << endl;
    }
};
int main()
{
    Distance d1(5, 8),d2(3, 10);
    Distance d3;
    d3.addDistance(d1,d2);
    d3.showData();
    return 0;
}