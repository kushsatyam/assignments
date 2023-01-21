#include<iostream>
using namespace std;

float area(float x)
{
    return 3.14*x*x;
}

int area(int x, int y)
{
    return x*y;
}

float area(float x, float y)
{
    return 0.5*x*y;
}

int main()
{
    float r,x,y;
    int l,b;

    cout<<"Enter the radius of the circle"<<endl;
    cin>>r;

    cout<<"Enter the length and breadth of the rectangle"<<endl;
    cin>>l>>b;

    cout<<"Enter the height and breadth of the triangle"<<endl;
    cin>>x>>y;

    cout<<"Area of the circle is "<<area(r)<<endl;
    cout<<"Area of the rectangle is "<<area(l,b)<<endl;
    cout<<"Area of the triangle is "<<area(x,y)<<endl;

    return 0;
}