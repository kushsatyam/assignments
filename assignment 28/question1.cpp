#include<iostream>
using namespace std;

class Complex{
private:
    int real;
    int img;
public:
    friend void operator>>(istream &cin,Complex &c);
    friend void operator<<(ostream &cout,Complex c);
};

void operator>>(istream &cin, Complex &c)
{
     cout<<"Real part of the number : ";
     cin>>c.real;
     cout<<"Img part of the number  : ";
     cin>>c.img;
}

void operator<<(ostream &cout, Complex c)
{
    cout<<c.real<<"+"<<c.img<<"i"<<endl;
}

int main()
{
    Complex c1;

    cout<<"Enter the first complex number "<<endl;
    cin>>c1;


    cout<<"\nThe comlex number are : ";
    cout<<c1;
    return 0;
}