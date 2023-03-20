#include<iostream>
using namespace std;

class shape{
protected:
    double a,b;
public:
    void get_data(int x, int y=0)
    {
        a = x;
        b = y;
    }

    virtual void area()
    {
        cout<<"This is virtual function used to find area of the figure"<<endl;
    }
};

class square:public shape{

public:
    square()
    {
        int s;
        cout<<"Enter the side of square"<<endl;
        cin>>s;

        get_data(s);
    }

    void area()
    {
        cout<<"\nThe area of the square is "<<a*a<<endl;
    }

};

class paralellogram: public shape{

public:
    paralellogram()
    {
        int base,height;
        cout<<"Enter the base and height of the paralellogram"<<endl;
        cin>>base>>height;

        get_data(base,height);
    }

    void area()
    {
        cout<<"\nThe area of the paralellogram is "<<a*b<<endl;
    }
};

int main()
{
    square s;
    paralellogram p;

    shape *t1,*t2;

    t1 = &s;
    t2 = &p;

    cout<<"\n";
    t1->area();
    t2->area();
    cout<<"\n";
    
    return 0;
}