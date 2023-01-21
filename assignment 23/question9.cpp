#include<iostream>
using namespace std;

int main()
{
    int a,b,c;

    cout<<"Enter the two number"<<endl;
    cin>>a>>b;

    c = a>b?a:b;

    cout<<"The maximum number is "<<c;
    return 0;
}