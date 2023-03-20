#include<iostream>
using namespace std;

class A{
public:
    A()
    {
        cout<<"Default A constructor"<<endl;
    }

    A(int a,int b)
    {
        cout<<"Parameterized constructor"<<endl;
    }
};

class B : public A{
public:
    B()
    {
        cout<<"Default B constructor"<<endl;
    }
};


int main()
{
    B b;
    return 0;
}