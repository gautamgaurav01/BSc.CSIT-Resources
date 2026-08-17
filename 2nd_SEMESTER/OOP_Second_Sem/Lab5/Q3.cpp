/*
3. Complete the program in C++ using concept of multilevel inheritance and give the necessary
comments.
a. Define a class Student that has two data member rollno and name. The class should have
getStudent() method to get student's data from user and displayStudent() to print student's rollno and
name.
b. Define another class Marks that inherits the properties from class Student that has three subjects as
data member. The class should get marks from the student, display them and find the total marks of
student's subjects.
c. Define another class Result that inherits the properties from class Marks. Find the percentage of the
student subjects.
 */

#include <iostream>
using namespace std;

class Student
{
private:
    int rollno;
    string name;

public:
    void getStudent()
    {
        cout << "Enter Roll No: ";
        cin >> rollno;
        cout << "Enter Name: ";
        cin >> name;
    }
    void displayStudent()
    {
        cout << "Roll No: " << rollno << ", Name: " << name << endl;
    }
};

class Marks : public Student
{
private:
    int subject1, subject2, subject3;

public:

};