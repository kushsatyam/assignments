#include<iostream>
using namespace std;

class A{
protected:
int a,b;
public:
    A()
    {
        a = 5;b= 10;
    }
    
    void display()
    {
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
    }
};

template<class T>
class B: public A{
public:
    T suma()
    {
        return T((a+b)*3.14);
    }
    
};

int main()
{
    B <int>y;

    cout<<y.suma();

    return 0;
}