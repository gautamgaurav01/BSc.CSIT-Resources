#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct student {
    int roll;
    char name[30];
    char address[30]; 
};

int main() {
    student s;
    cout<<"Enter value of roll,name,address"<<endl; 
    cin>>s.roll>>s.name>>s.address;
     ofstream fileout;
    fileout.open("example.dat");
    if (!fileout) {
        cout << "Error opening file!" << endl;
        return 1;
    }
    fileout.write((char*)&s, sizeof(s));
    fileout.close();
    cout << "Written successfully." << endl;
    ifstream filein;
    filein.open("example.dat");
    if (!filein) {
        cout << "Error opening file!" << endl;
        return 1;
    }
    student s_read;
    filein.read((char*)&s_read, sizeof(s_read));
    filein.close();
    return 0;
}
