#include<iostream>
using namespace std;

class Complex{
private:
    int real;
    int img;
public:
    void setData(int real, int img)
    {
        this->real = real;
        this->img = img;
    }

    void display()
    {
        cout<<"The number are : "<<real<<"+"<<img<<"i";
    }
};

int main()
{
    Complex c1;

    c1.setData(4,5);

    c1.display();

    return 0;
}