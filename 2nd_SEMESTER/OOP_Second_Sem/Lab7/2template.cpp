#include<iostream>
using namespace std;
template<class T ,class U>
U getMax(T a, U b) {
    return a>b?a:b;
}
int main()
{
    int i1;
    float f1;
    cout<<"Enter two digits"<<endl;
    cin>>i1>>f1;
    cout<<getMax(i1,f1)<<" is greater digit "<<endl;
    return 0;
}