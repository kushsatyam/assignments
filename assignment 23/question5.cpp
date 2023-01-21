#include<iostream>
using namespace std;

int main()
{
    float l,b,h,vol;

    cout<<"Enter the length, breadth and height of the cuboid"<<endl;
    cin>>l>>b>>h;

    vol = l*b*h;

    cout<<"Volumn of the cuboid is "<<vol;
    return 0;
}