#include<iostream>
using namespace std;
class derived;

class base{
private:
    int a;
public:
    base(int x)
    {
        a = x;
    }

    void display()
    {
        cout<<"a = "<<a<<endl;
    }

    friend void swap(base &s, derived &t);    //Isko yha pr derived class ke bare me nhi pta tha isliye hmko class ko declare krna padega.
};

class derived{
private:
    int c;
public:
    derived(int x)
    {
        c = x;
    }

    void display()
    {
        cout<<"c = "<<c<<endl;
    }

    friend void swap(base &s, derived &t);
};

void swap(base &s, derived &t)
{
    int temp;
    temp = s.a;
    s.a = t.c;
    t.c = temp;
}

// Swap() is friend function of both base class and derived class.


int main()
{
    base b(2);
    derived d(3);

    swap(b,d);

    b.display();
    d.display();

    return 0;
}