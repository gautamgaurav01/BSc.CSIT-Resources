#include <iostream>
using namespace std;

class Student
{
private:
    int roll;
    string name;

public:
    Student() {}
    Student(int roll,string name)
    {
        this->roll = roll;
        this->name = name;
    }
    void showData()
    {
        cout << "Roll No.: " << roll << endl;
        cout << "Name: " << name << endl;
    }
};

int main()
{
    Student s1(16,"Gaurav Gautam") ;
    s1.showData();
    Student s2(07,"Ansul Rana");
    s2.showData();
    Student s3(04,"Anmol Thaiba");
    s3.showData();
    return 0;
}