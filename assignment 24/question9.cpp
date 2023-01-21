#include<iostream>
using namespace std;

int max(int a, int b)
{
    int c = a>b?a:b;
    return c;
}

float max(float a, float b)
{
    float c = a>b?a:b;
    return c;
}

int main()
{
    int x,y;
    float a,b;

    cout<<"Enter the number"<<endl;
    cin>>x>>y;

    cout<<"Enter the another float two number"<<endl;
    cin>>a>>b;

    cout<<max(x,y)<<endl;
    cout<<max(a,b);

    return 0;
}