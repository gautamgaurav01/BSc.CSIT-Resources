#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main() {

    ifstream myFile;
    myFile.open("example.txt");
    if(!myFile){
        cerr<<"problem in file"<<endl;
    }
    else {
        char ch;
        while(!myFile.eof()){
            myFile>>ch;
            cout<<ch;
        }
    }
    myFile.close();
    return 0;
}
