#include<iostream>
using namespace std;

class Complex{
    int real;
    int img =0;
public:
    Complex(int x)
    {
        real = x;
        img = x;
    }

    void display()
    {
        cout<<"Complex Number = "<<real<<"+"<<img<<"i"<<endl;
    }

    
};

int main()
{
    Complex c1=5;

    c1.display();
    return 0;
}