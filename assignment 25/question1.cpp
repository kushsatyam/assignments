#include<iostream>
using namespace std;

class complex{
    int real;
    int img;
public:

    void setValues(int a,int b)
    {
        real = a;
        img = b;
    }

    void printValue()
    {
        cout<<endl;
        cout<<real<<"+"<<img<<"i";
    }
};

int main()
{
    complex c1;
    int a,b;

    cout<<"Enter the real and img part of the number"<<endl;
    cin>>a>>b;

    c1.setValues(a,b);
    c1.printValue();
    return 0;
}

