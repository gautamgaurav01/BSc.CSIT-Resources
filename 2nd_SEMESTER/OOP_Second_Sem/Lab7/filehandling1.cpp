#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main() {

    ofstream myFile;
    myFile.open("example.txt");
    if(!myFile){
        cerr<<"problem in file"<<endl;
    }
    else {
        cout<<"File created"<<endl;
        myFile<<"Hello this is my dwtwfile"<<endl;
    }
    myFile.close();
    return 0;
}  