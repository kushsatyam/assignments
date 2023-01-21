#include<iostream>
using namespace std;

class Area{
    int r,l,b;
    int sq,rect;
    float cir;
public:
    Area(int x)
    {
        r = x;
    }

    Area(int x,int y)
    {
        l=x; b=y;
    }

    void square()
    {
        sq = r*r;
    }

    void rectangle()
    {
        rect = l*b;
    }

    void circle()
    {
        cir = 3.14*r*r;
    }

    void printSq()
    {
        cout<<"Area of square = "<<sq<<endl;
    }

    void printRect()
    {
        cout<<"Area of the Rectangle = "<<rect<<endl;
    }

    void printCir()
    {
        cout<<"Area of the circle = "<<cir<<endl;
    }
};

int main()
{
    Area s(4),c(3),r(4,5);

    s.square();
    c.circle();
    r.rectangle();

    c.printCir();
    r.printRect();
    s.printSq();


    return 0;
}