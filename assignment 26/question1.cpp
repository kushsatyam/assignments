#include<iostream>
using namespace std;

class Complex{
    int a;
    int b;
public:
    void setData(int x,int y)
    {
        a = x;
        b = y;
    }

    void showData()
    {
        cout<<"Number is "<<a<<"+"<<b<<"i"<<endl;
    }

    Complex add(Complex);  //In this function Formal argument type is complex and return type also is complex.
};

Complex Complex::add(Complex c2)
{
    Complex temp;

    temp.a = a+c2.a;
    temp.b = b+c2.b;

    return temp;
}

int main()
{
    int a,b,c,d;

    cout<<"Enter the real and img part of the first complex number"<<endl;
    cin>>a>>b;

    cout<<"Enter the real and img part of the second complex number"<<endl;
    cin>>c>>d;

    Complex c3,c1,c2;

    c1.setData(a,b);
    c2.setData(c,d);

    c3 = c1.add(c2);   //Here c1 is call implicitly and c2 is call explicitly. Here we can also achive this by using operator overloading.

    // c1.showData();
    // c2.showData();
    c3.showData();
    return 0;
}