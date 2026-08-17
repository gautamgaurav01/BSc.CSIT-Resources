/* // area and perimeter of rectangle
#include <iostream>
using namespace std;
// Class definition for rectangle
class Rectangle
{
private:
    float length; // Private data member
    float width;  // Private data member
public:
    // Member function to set data
    void setdata(float l, float w)
    {
        length = l;
        width = w;
    }
    // Member function to display data
    void showdata()
    {
        cout << "Length: " << length << ", Width: " << width << endl;
        cout << "Area: " << calculateArea() << endl;
        cout << "Perimeter: " << calculatePerimeter() << endl;
    }
    // Member function to calculate area
    float calculateArea()
    {
        return length * width;
    }
    // Member function to calculate perimeter
    float calculatePerimeter()
    {
        return 2 * (length + width);
    }
};

int main()
{
    // Create three objects of Rectangle class
    Rectangle rect1, rect2, rect3;
    // Initialize data for each object
    rect1.setdata(5.0, 3.0);
    rect2.setdata(7.5, 4.2);
    rect3.setdata(10.0, 6.0);
    // Display data for each object
    cout << "Rectangle 1:" << endl;
    rect1.showdata();
    cout << "\nRectangle 2:" << endl;
    rect2.showdata();
    cout << "\nRectangle 3:" << endl;
    rect3.showdata();
    return 0;
}  */

/* // above program in different
#include <iostream>
using namespace std;
class Rectangle
{
private:
    float length;
    float width;

public:
    void setdata(float l, float w);
    void showdata();
    float calculateArea();
    float calculatePerimeter();
};
// Member function definitions outside the class
void Rectangle::setdata(float l, float w)
{
    length = l;
    width = w;
}
void Rectangle::showdata()
{
    cout << "Length: " << length << ", Width: " << width << endl;
    cout << "Area: " << calculateArea() << endl;
    cout << "Perimeter: " << calculatePerimeter() << endl;
}
float Rectangle::calculateArea()
{
    return length * width;
}
float Rectangle::calculatePerimeter()
{
    return 2 * (length + width);
}

int main()
{
    Rectangle rect1, rect2, rect3;
    rect1.setdata(5.0, 3.0);
    rect2.setdata(7.5, 4.2);
    rect3.setdata(10.0, 6.0);

    cout << "Rectangle 1:" << endl;
    rect1.showdata();
    cout << "\nRectangle 2:" << endl;
    rect2.showdata();
    cout << "\nRectangle 3:" << endl;
    rect3.showdata();

    return 0;
} */

/* //Student Class with getDetails and showDetails
#include <iostream>
#include <cstring>
using namespace std;

class Student {
private:
    char name[30];
    int rollNo;
    int total;
    float perc;
public:
    void getDetails() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> rollNo;
        cout << "Enter total marks out of 500: ";
        cin >> total;
        perc = (float)total / 500 * 100;
    }
    void showDetails() {
        cout << "Student details:" << endl;
        cout << "Name: " << name << ", Roll Number: " << rollNo << ", Total: " << total << ", Percentage: " << perc << "%" << endl;
    }
};

int main() {
    Student s1;
    s1.getDetails();
    s1.showDetails();
    return 0;
} */

/*// test program
#include <iostream>
using namespace std;
class Test
{
private:
public:
    int x;
    int y;
    void getdata()
    {
        cout << "Enter x and y" << endl;
        cin >> x >> y;
    }
};
int main()
{
    Test t;
    t.getdata();
    cout << "Enter the value of x" << endl;
    cin >> t.x; // generates error
    cout << "Enter the value of y" << endl;
    cin >> t.y; // No error
}*/

/* //default constructor and  Parameterized constructor
#include <iostream>
using namespace std;

class rectangle
{
private:
    int length, width;
public:
    // Default constructor
    rectangle()
    {
        length = 0;
        width = 0;
    }
    // Parameterized constructor
    rectangle(int l, int w)
    {
        length = l;
        width = w;
    }
    void showData()
    {
        cout << "Length: " << length << ", Width: " << width << endl;
    }
    int findArea()
    {
        return length * width;
    }
    int findPerimeter()
    {
        return 2 * (length + width);
    }
};

int main()
{
    // Using default constructor
    rectangle r1;
    r1.showData();
    cout << "Area: " << r1.findArea() << endl;
    cout << "Perimeter: " << r1.findPerimeter() << endl;
    // Using parameterized constructor
    rectangle r2(10, 5);
    r2.showData();
    cout << "Area: " << r2.findArea() << endl;
    cout << "Perimeter: " << r2.findPerimeter() << endl;

    return 0;
} */

/* // default constructor ,  Parameterized constructor,copy constructur & default copy constructur
#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int age;

public:
    // Default constructor
    Student()
    {
        name = "Unknown";
        age = 0;
    }
    // Parameterized constructor
    Student(string n, int a)
    {
        name = n;
        age = a;
    }
    //Copy constructor
    Student(Student &s)
    {
        name = s.name;
        age = s.age;
    }
    void showData()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    Student s1, s2("Gaurav Gautam", 20), s3(s2), s4 = s3;
    // Creating object with default constructor
    cout << "Default Constructor Output:" << endl;
    s1.showData();
    // Creating object with parameterized constructor
    cout << "\nParameterized Constructor Output:" << endl;
    s2.showData();
    // Creating object with copy constructor
    cout << "\nCopy constructor" << endl;
    s3.showData();
    // Creating object with default copy constructor
    cout << "\nDefault copy constructor" << endl;
    s4.showData();
    return 0;
} */

/* // destructure
#include <iostream>
using namespace std;
class test
{
private:
    int a, b;
public:
test (){
    a=0;
    b=0;
    cout<<"Memory allocated"<<endl;
}
~test(){
    cout<<"Memory delocated";
}
};
int main() {
    test t1;
    return 0;
} */