#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    ifstream gaurav;
    gaurav.open("example.txt");
    if (!gaurav)
    {
        cerr << "problem in file" << endl;
    }
    else
    {
        char str[100];
        gaurav.getline(str,100);
        cout<<str<<endl;
    }
    gaurav.close();
    return 0;
}
