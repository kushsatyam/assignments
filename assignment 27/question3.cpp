#include<iostream>
using namespace std;

class Complex{
    private:
        int real;
        int img;
    public:
        void setValue(int a, int b)
        {
            real = a;
            img = b;
        }

        void showNumber()
        {
            cout<<real<<"+"<<img<<"i"<<endl;
        }

        friend Complex operator+(Complex c1,Complex c2);
};

Complex operator+(Complex c1, Complex c2)
{

    Complex temp;
    temp.real = c1.real + c2.real;
    temp.img = c1.img + c2.img;

    return temp;
}

int main()
{
    Complex c1,c2,c3;

    c1.setValue(2,3);
    c2.setValue(4,5);

    c3 = c1+c2;

    c3.showNumber();

    return 0;
}