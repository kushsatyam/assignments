#include<iostream>
using namespace std;

class Complex{
    int real;
    int img;
public:
    Complex()
    {}

    Complex(int r, int i)
    {
        real = r;
        img = i;
    }

    void display();

    Complex operator+(Complex c2);
    Complex operator-(Complex c2);
    Complex operator*(Complex c2);
    bool operator==(Complex c2);
};

bool Complex::operator==(Complex c2)
{
    if(real == c2.real  && img == c2.img)
    {
        return true;
    }

    return false;
}

Complex Complex::operator*(Complex c2)
{
    Complex temp;
    
    temp.real = real*c2.real - img*c2.img;
    temp.img = real*c2.img + img*c2.real;

    return temp;
}

Complex Complex::operator-(Complex c2)
{
    Complex temp;
    temp.real = real - c2.real;
    temp.img = img - c2.img;

    return temp;
}

Complex Complex::operator+(Complex c2)
{
    Complex temp;
    temp.real = real + c2.real;
    temp.img = img + c2.img;

    return temp;
}



void Complex::display()
{
    cout<<real<<"+"<<img<<"i"<<endl;
}

int main()
{
    Complex c1(3,-2),c2(3,-2),c3;

    c3 = c1 + c2;   // c1 + c2 == c1.operator+(c2);

    c3 = c1 - c2;  // c1 - c2 == c1.operator-(c2);

    c3 = c1 * c2;      // c1 * c2 == c1.operator*(c2);

    (c1 == c2) ? cout<<"Both number are same" : cout<<"Both number are different";   // c1 == c2  == c1.operator==(c2);

    c3.display();
    return 0;
}