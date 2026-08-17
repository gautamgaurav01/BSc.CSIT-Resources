/*// hello world
#include <iostream>
using namespace std;
int main ()
{
    cout <<"Hello World";
    return 0;
} */

/*// cascading cout and cin.
#include <iostream>
 using namespace std;
 int main()
 {
 int a,b;
 cout << "Enter value of a and b : ";

 cin >>a >>b;

 cout<< "A : " << a << ", B : " << b << endl;
 return 0;
} */

/*//print name
#include <iostream>
using namespace std;
int main() {
    cout<<"Student " << "Class \t "<< "Age \t"  <<endl
    <<"Sagar \t" << "Csit-v \t "<< "22 \t " <<endl
    <<"basnet \t" << "bca-v \t "<< "23 \t ";
    return 0;
}*/

/*/  accept two numbers and prints the their sum
 #include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    cout << "Sum = " << x + y;
    return 0;
}*/

/*//swap number
#include <iostream>
using namespace std;

int main() {
    int a, b, temp;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    temp = a;
    a = b;
    b = temp;
    cout << "After swapping, A = " << a << ", B = " << b;
    return 0;
} */

// calculate the area of circle
/*#include <iostream>
#include <cmath>
#define PI 3.14
using namespace std;

int main() {
    float radius;
    cout << "Enter radius: ";
    cin >> radius;
    float area = PI * pow(radius, 2);
    cout << "Area of circle = " << area;
    return 0;
}*/

/*//odd and even
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    string result = (num % 2 == 0) ? "Even" : "Odd";
    cout << "The number is " << result;
    return 0;
}*/

/*// see data
#include <iostream>
 using namespace std;
 int main()
 {
 int n = 4, k = 2;
 cout << n << endl;
 cout << ++n << endl;
 cout << n << endl;
 cout << n++ << endl;
 cout << n << endl;
 cout << --n << endl;
 cout << n << endl;
 cout << n-- << endl;
 cout << n << endl;
 cout << n + k << endl;
 cout << n << endl;
 cout << k << endl;
 cout <<n << k << endl;
 cout << n << endl;
 cout << " " << n << endl;
 cout << " n" << endl;
 cout << "\n" << endl;
 cout << " n * n = "; //CAREFUL!
 cout << n * n << endl;
 cout << 'n' << endl;
 return 0;
 }*/

/*6//Analyze the output
 #include <iostream>
using namespace std;
int main()
{
   int n;
   cout << (n = 4) << endl;
   cout << (n == 4) << endl;
   cout << (n > 3) << endl;
   cout << (n < 4) << endl;
   cout << (n = 0) << endl;
   cout << (n == 0) << endl;
   cout << (n > 0) << endl;
   cout << (n && 4) << endl;
   cout << (n || 4) << endl;
   cout << (!n) << endl;
   return 0;
}*/

/*//setw and endl Manipulators
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   char pName[3][30] = {"Dove Soap", "Colgate", "Vim"};
   int qty[3] = {5, 10, 15};

   cout << setw(30) << "Product Name" << setw(20) << "Quantity" << endl;
   for(int i = 0; i < 3; i++) {
       cout << setw(30) << pName[i] << setw(20) << qty[i] << endl;
   }
   return 0;
}*/

/*//Namespaces Usage
#include <iostream>
using namespace std;
namespace first {
   int val = 500;
   double a = 10.001;
}
namespace second {
   int val = 600;
   double a = 12.001;
}
int val = 200;

int main() {
   int val = 100;
   cout << "The value of val is " << val << endl;           // local val
   cout << "The value of val is " << first::val << endl;    // namespace first
   cout << "The value of val is " << second::val << endl;   // namespace second
   cout << "The value of val is " << ::val << endl;         // global
   cout << "The value of val is " << first::a << endl;      // namespace first double
   cout << "The value of val is " << second::a << endl;     // namespace second double
   return 0;
}*/

/*//Display Next Character
#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    ch = ch + 1;
    cout << "Next character is: " << ch << endl;
    return 0;
}*/

/*Convert Days to Years, Months, Days
#include <iostream>
using namespace std;

int main() {
    int days;
    cout << "Enter total days: ";
    cin >> days;
    int years = days / 365;
    days %= 365;
    int months = days / 30;
    int remainingDays = days % 30;
    cout << "Years: " << years << ", Months: " << months << ", Days: " << remainingDays << endl;
    return 0;
} */
