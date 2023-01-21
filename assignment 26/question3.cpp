#include<iostream>
using namespace std;

class cube{
    int side;
    int v;
public:
    cube(int x)
    {
        side =x;
    }
    void vol()
    {
        v = side*side*side;
    }

    void print()
    {
        cout<<"Volumn of cube is "<<v<<endl;
    }
};

int main()
{
    int a;

    cout<<"Enter the side of the cube"<<endl;
    cin>>a;

    cube c(a);

    c.vol();

    c.print();
    return 0;
}