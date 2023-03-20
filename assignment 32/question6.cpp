#include<iostream>
using namespace std;

class A{
    int a;
public:
    A(  int x)
    {
        a = x;

        cout<<"a = "<<a<<endl;
    }
};

class B:public A{
    int b;
public:
    B(int x,int y):A(y)
    {
        b = x;
        cout<<"b = "<<b<<endl;
    }
};

class C:public B{
    int c;
public:
    C(int x,int y,int z):B(y,z)
    {
        c = x;
        cout<<"c = "<<c<<endl;
    }
};

int main()
{
    C x(2,3,4);
    return 0;
}