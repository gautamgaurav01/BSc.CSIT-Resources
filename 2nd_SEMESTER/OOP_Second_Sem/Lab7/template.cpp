#include<iostream>
using namespace std;
template<class T>
T getMax(T a, T b) {
    return a>b?a:b;
}
int main()
{
    int i1,i2;
    float f1,f2;
    char c1,c2;
    cout<<"Enter two integers"<<endl;
    cin>>i1>>i2;
    cout<<"Enter float ";
    cin>>f1>>f2;
    cout<<"Enter char";
    cin>>c1>>c2;
    cout<<getMax(i1,i2)<<" is greater integer "<<endl;
    cout<<getMax(f1,f2)<<" is greater float "<<endl;
    cout<<getMax(c1,c2)<<" is greater char "<<endl; 
    return 0;
}