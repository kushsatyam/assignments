#include<iostream>
using namespace std;

class A{
    int a;
public:
    A(int x)
    {
        a = x;
        cout<<"Parent"<<endl;
    }
};

class B:public A{
    int b;
public:
    B(int x,int y):A(y)
    {
        b=x;
        cout<<"Child"<<endl;
        //By using constructor i can initialize the instance ariable of base class.
    }
};
int main()
{
    B x(2,3);
    return 0;
}