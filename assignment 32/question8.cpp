#include<iostream>
using namespace std;

class Fact{
    int n,factor;
public:
    Fact(int x)
    {
        n = x;
    }

    Fact(Fact &f)
    {
        n = f.n;
        factor =1;
    }

    void calculate()
    {
        for(int i=1;i<=n;i++)
        {
            factor = factor*i;
        }
    }

    void display()
    {
        cout<<"Factorial : "<<factor<<endl;
    }

};

int main()
{
    Fact f1(5);

    f1.calculate();
    // f1.display();

    Fact f2(f1);

    f2.calculate();
    f2.display();


    return 0;
}