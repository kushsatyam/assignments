#include<iostream>
using namespace std;

class item{
    int x;
public:
    item()
    {}

    item(int p)
    {
        x = p;
    }

    void display()
    {
        cout<<"x = "<<x;
    }
};

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

    operator item()
    {
        item i(a+b);   // in product class we can not access the instance member variable of item class so we need to call any public    function for assign the value. 
        return i;
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