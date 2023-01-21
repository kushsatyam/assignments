#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter the two number"<<endl;
    cout<<"a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;

    a = a+b;
    b = a-b;
    a = a-b;

    cout<<"After swapping the number are a = "<<a<<" b = "<<b;
    return 0;
}