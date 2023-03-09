#include<iostream>
using namespace std;

class Distance{
private:
    int feet;
    int inches;
public:
    Distance()
    {}

    Distance(int a, int b)
    {
        feet = a;
        inches = b;
    }

    void display()
    {
        cout<<"Feet = "<<feet<<" Inches = "<<inches;
    }

    Distance operator()(int a, int b, int c)  // () ( function call ) operator ko overload kiya hai  
    {
        Distance d;
        d.feet = a+c+5;
        d.inches = a+b+15;
        return d;
    }
};

int main()
{
    Distance d1(3,4),d2;
    
    d2 = d1(3,4,5);

    d1.display();
    d2.display();
    return 0;
}