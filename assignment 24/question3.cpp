#include<iostream>
using namespace std;

int power(int x,int y)
{
    int pr=1;

    for(int i=1;i<=y;i++)
    {
        pr = pr*x;
    }
    return pr;
}

int main()
{
    int x,y;

    cout<<"Enter the number"<<endl;
    cin>>x>>y;

    cout<<power(x,y);
    return 0;
}