#include<iostream>
using namespace std;

template<class t>
t add(t x, t y)
{
    return x+y;
}

int main()
{
    int a,b;

    cout<<"Enter the two number"<<endl;
    cin>>a>>b;

    cout<<"Addition : "<<add<int>(a,b);
    return 0;
}