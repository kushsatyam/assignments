#include<iostream>
using namespace std;

void swap(int &p,int &q)
{
    int c;
    c = p;
    p = q;
    q = c;

    
}

int main()
{
    int a,b;

    cout<<"Enter the two number"<<endl;
    cin>>a>>b;

    swap(a,b);
    cout<<endl;
    cout<<"a = "<<a<<" b = "<<b;
    return 0;
}