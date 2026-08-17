/* Complete the program in C++ using concept of multiple inheritance and give the necessary
comments.
a. Define a class Teacher that has two data member id and subject. The class should have
getTeacher() method to get teacher's data from user and displayTeacher() to print teacher's id and
subject.
b. Define another class Staff that has two data member id and level. The class should have getStaff()
method to get staff's data from user and displayStaff() to print staff's id and level.
c. Define another class Coordinator that inherits the properties from class Teacher and Staff. Also
Coordinator has data member program and getdata() and displaydata() method to get data from the
user and print them */


#include<iostream>
using namespace std;

class Teacher {
private:
    int id;
    string subject;
public:
    void getTeacher() {
        cout << "Enter Teacher ID: ";
        cin >> id;
        cout << "Enter Subject: ";
        cin >> subject;
    }
    void displayTeacher() {
        cout << "Teacher ID: " << id << ", Subject: " << subject << endl;
    }
};

class Staff {
private:
    int id;
    string level;
public:
    void getStaff() {
        cout << "Enter Staff ID: ";
        cin >> id;
        cout << "Enter Level: ";
        cin >> level;
    }
    void displayStaff() {
        cout << "Staff ID: " << id << ", Level: " << level << endl;
    }
};

class Coordinator : public Teacher, public Staff {
private:
    string program;
public:
    void getdata() {
        getTeacher();
        getStaff(); 
        cout << "Enter Program: ";
        cin >> program;
    }
    void displaydata() {
        displayTeacher();
        displayStaff();
        cout << "Program: " << program << endl;
    }
};
int main() {
    Coordinator coordinator;
    coordinator.getdata();
    coordinator.displaydata();
    return 0;
}
