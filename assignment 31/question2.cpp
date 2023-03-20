#include<iostream>
using namespace std;

class Base{
protected:
    int a,b;
public:
    Base(int x, int y)
    {
        a = x;
        b = y;
        cout<<"Constructor call"<<endl;
    }
};

class derived: protected Base{
    int sum;
public:
    derived(int x, int y):Base(x,y)
    {
        //ye body base class ke constructor ke chlne ke baad chlegi.
    }
    void add()
    {
        sum = a+b;
    }

    void display()
    {
        cout<<sum<<endl;
    }
};

int main()
{
    derived d(2,5);
    d.add();
    d.display();
    return 0;
}