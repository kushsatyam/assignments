#include<iostream>
using namespace std;

class volume{
protected:
    double r,s;
public:
    void get_data(int x)
    {
        r = x;
    }

    virtual void display_volume()
    {
        cout<<"This is an error"<<endl;
    }
};

class cube:public volume{

public:
    cube()
    {
        int a;
        cout<<"Enter the sides of the cube"<<endl;
        cin>>a;

        get_data(a);
    }

    void display_volume()
    {
        cout<<"Volume of the cube is : "<<r*r*r<<endl;
    }
};

class sphere:public volume{

public:
    sphere()
    {
        int b;
        cout<<"Enter the radius of the sphere"<<endl;
        cin>>b;
        get_data(b);
    }

    void display_volume()
    {
        cout<<"Volume of the sphere is : "<<(4*3.14*r*r*r)/3<<endl;
    }
};

int main()
{
    cube a;
    sphere s;

    volume *p,*q;
    p= &a;
    q = &s;

    p->display_volume();
    q->display_volume();

    return 0;
}