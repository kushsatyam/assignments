#include<iostream>
using namespace std;

class Coordinate{
private:
    int x,y,z;
public:
    Coordinate()
    {}

    Coordinate(int x,int y,int z):x(x),y(y),z(z)  // Initializer list
    {}

    void display()
    {
        cout<<"x = "<<x<<" y = "<<y<<" z = "<<z;
    }

    Coordinate operator,(Coordinate c)
    {
        return c;
    }
};

int main()
{
    Coordinate c1(3,5,4),c2(1,2,3),c3;

    c3 = (c2,c1);

    c3.display();

    return 0;
}