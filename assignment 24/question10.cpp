#include<iostream>
using namespace std;

int add(int a,int b)
{
    return a+b;
}
float add(float a,float b)
{
    return a+b;
}

int main()
{
    int a,b;
    float x,y;

    cout<<"Enter the two number"<<endl;
    cin>>a>>b;

    cout<<"Enter the two real number"<<endl;
    cin>>x>>y;

    cout<<add(a,b)<<endl;
    cout<<add(x,y)<<endl;
    return 0;
}