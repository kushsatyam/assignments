#include<iostream>
using namespace std;

int addition(int x, int y, int z=0)
{
    return x+y+z;
}

int main()
{
    int x,y;

    cout<<"Enter the two number"<<endl;
    cin>>x>>y;

    cout<<addition(x,y)<<" and "<<addition(x,y,5)<<endl;
    
    return 0;
}