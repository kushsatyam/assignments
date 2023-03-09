#include<iostream>
using namespace std;


class invent2{
    float a1,b1;
public:
    invent2()
    {}

    invent2(float a1, float b1):a1(a1),b1(b1)
    {}

    void display()
    {
        cout<<"a1 = "<<a1<<" b1 "<<b1<<endl;
    }

};

class invent1{
    float a,b;
public:
    invent1(float a, float b):a(a),b(b)
    {}

    operator invent2()
    {
        invent2 i(a,b);
        return i;
    }

    operator float()
    {
        return a+b; 
    }

    void display()
    {
        cout<<"a = "<<a<<" b = "<<b<<endl;
    }
};

int main()
{
    invent1 x(4,5);
    invent2 y = x;

    float z = x;

    x.display();
    y.display();
    cout<<"z = "<<z<<endl;
    return 0; 
}   
    