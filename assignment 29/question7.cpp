#include<iostream>
using namespace std;

class minute{
    int min;
public:
    minute()
    {}

    minute(int b)
    {
        min = b;
    }

    void setData(int a)
    {
        min = a;
    }

    int  getData()
    {
        return min;
    }

    void display()
    {
        cout<<"Min : "<<min<<endl;
    }
};

class Time{
    int hr;
    int min;
public:
    Time(int x,int y)
    {
        hr = x;
        min = y;
    }

    void display()
    {
        cout<<"Hour : "<<hr<<" Minute : "<<min<<endl;
    }

    operator minute()
    {
        return hr*60+min;
    }
};

int main()
{
    Time t1(2,30);
    t1.display();
    minute m1;
    // m1.display(); //print garbage value.

    m1 = t1;

    m1.display();
    return 0;
}