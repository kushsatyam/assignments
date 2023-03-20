#include<iostream>
using namespace std;

class Shape{
protected:
    double a,b;
public:
    void set_data(double x,double y)
    {
        a = x; b = y;
    }

    virtual void display_area()
    {
        cout<<"\nThe area of the figure : "<<a*b<<endl;
    }
};

class triangle: public Shape{
public:
    triangle()
    {
        double x,y;
        cout<<"\nEnter base of the triangle"<<endl;
        cin>>x;
        cout<<"\nEnter the height of the triangle"<<endl;
        cin>>y;
        set_data(x,y);
    }

    void display_area()
    {
        cout<<"\nArea of the triangle is "<<(a*b)/2<<endl;
    }
};

class Rectangle: public Shape{
public:
    Rectangle()
    {
        double x,y;
        cout<<"\nEnter length of the rectangle"<<endl;
        cin>>x;
        cout<<"\nEnter the breadth of the rectangle"<<endl;
        cin>>y;
        set_data(x,y);
    }

    void display_area()
    {
        cout<<"\nArea of the rectangle is "<<a*b<<endl;
    }
};

int main()
{
    triangle t;
    Rectangle r;

    Shape *s,*q;
    s = &t;
    q = &r;

    s->display_area();
    q->display_area();


    cout<<"\n";

    return 0;
}