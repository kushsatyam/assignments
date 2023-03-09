#include<iostream>
using namespace std;

class Rupee{
    int a;
public:
    Rupee(int x)
    {
        a = x;
    }

    int get()
    {
        return a;
    }

    void display()
    {
        cout<<"Rupee : "<<a<<endl;
    }


};

class Dollar{
    int y;
public:
    Dollar(int b)
    {
        y = b;
    }

    Dollar(Rupee r)
    {
        y = r.get();
    }

    void display()
    {
        cout<<"Dollar : "<<y<<endl;
    }

    operator Rupee()
    {
        return y;
    }
};

int main()
{
    Rupee r = 23;
    Dollar d = r;

    d.display();
    r.display();

    r = d;

    d.display();
    r.display();
    return 0;
}