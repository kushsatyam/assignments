#include<iostream>
using namespace std;

class Complex{
private:
    int real;
    int img;
public:
    void setData()
    {
        cout<<"Real Part : ";
        cin>>real;
        cout<<"Img Part : ";
        cin>>img;
    }

    void display()
    {
        cout<<real<<"+"<<img<<"i"<<endl;
    }

    void operator =(Complex c)
    {
        real = c.real;
        img = c.img;
    }
};

int main()
{
    Complex c1,c2;

    cout<<"Enter the complex number "<<endl;
    c1.setData();

    cout<<"The first complex number : ";
    c1.display();
    
    c2 = c1;

    cout<<"\nThe Copy compleex number are : ";

    c2.display();
    return 0;
}