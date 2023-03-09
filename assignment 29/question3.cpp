#include<iostream>
using namespace std;


class Product{
    int a,b;    // they are private instance member variable so, they can accessible with in the class.
public:
    void setData(int a,int b)
    {
        this->a = a;
        this->b = b;
    }

    void display()
    {
        cout<<"a = "<<a<<" b = "<<b;
    }

    int getA()
    {
        return a;
    }

    int getB()
    {
        return b;
    }
};

class item{
    int x;
public:
    item(Product p)
    {
        x = p.getA()+p.getB();
    }

    void display()
    {
        cout<<"x = "<<x;
    }
};

int main()
{
    Product p1;

    p1.setData(3,4);
    item i1 = p1;

    i1.display();
    return 0;
}