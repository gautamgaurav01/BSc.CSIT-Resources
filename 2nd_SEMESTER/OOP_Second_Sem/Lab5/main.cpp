#include <iostream>
using namespace std;
class Animal
{
public:
    void eat();
    void sleep();
};

class Dog : public Animal
{
public:
    void bark();
};

void Animal ::eat()
{
    cout << "Animal is eating." << endl;
}

void Animal ::sleep()
{
    cout << "Animal is sleeping." << endl;
}

void Dog ::bark()
{
    cout << "Dog is barking." << endl;
}

int main()
{
    Dog d;
    d.eat();
    d.sleep();
    d.bark();
    return 0;
}