/* //Program in C++ to demonstrates function overloading
#include <iostream>

using namespace std;
int add (int x,int y) {
return x+y;
}
int add (int x,int y,int z) {
return x+y+z;
}
float add (float m, float n) {
return m+n;
}
float add (float m, int y) {
return m+y;}
int main()
{
    int x=10, y=20, z=30;
    float m=3.5, n=4.8;
    cout <<"Sum of integer and integer is "<< add(x,y) <<endl;
    << "Sum of integer , integer and integer is "<< add(x,y,z) <<endl;
    << "Sum of float and float is "<< add(m,n) <<endl;
    << "Sum of float and integer is "<< add(m,y) <<endl;
     return 0;
} */

/* // Program in C++ to demonstrates inline function
#include <iostream>

using namespace std;
int sum(int x, int y)
{
    return x + y;
}
int main()
{
    int x = 3, y = 3;
    cout << "Sum = " << sum(x, y);
    return 0;
} */ 

/*// program in C++ that demonstrates default arguments
#include<iostream>
using namespace std;

int sum(int x, int y, int z=1, int w=1){
    return x + y + z + w;
}

int main(){
    cout << "Sum is  " << sum(1, 9) << endl;
    cout << "Sum is  " << sum(1,12,2) << endl;
    cout << "Sum is  " << sum(2,14,2,2) << endl;
    return 0;
} */

/*//program in C++ that performs arithmetic operation on two numbers
#include<iostream>
using namespace std;

void choose() {
    cout << "Menu:\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\n";
}

int Add(int a, int b) {
    return a + b;
}

int Sub(int a, int b) {
    return a - b;
}

int Mul(int a, int b) {
    return a * b;
}

float Div(int a, int b) {
    return (float)a / b;
}

int main() {
    int choice, a, b;

    choose();
    cout << "Choose Operation: ";
    cin >> choice;
    if (choice == 5) {
        cout << "Exiting" << endl;
        return 0;
    }

    cout << "Enter two numbers: ";
    cin >> a >> b;

    switch(choice) {
        case 1:
            cout << "Add = " << Add(a, b) << endl;
            break;
        case 2:
            cout << "Subtract = " << Sub(a, b) << endl;
            break;
        case 3:
            cout << "Multiply = " << Mul(a, b) << endl;
            break;
        case 4:
            cout << "Divide = " << Div(a, b) << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}*/
