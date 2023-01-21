#include<iostream>
using namespace std;

class circle{
    int r;
public:
    circle(int x)
    {
        r = x;
    }

    float area()
    {
        return 3.14*r*r;
    }
};

int main()
{
    int r;

    cout<<"Enter the radius of the circle "<<endl;
    cin>>r;

    circle c(r);

    cout<<"Area of the circle is "<<c.area();
    return 0;
}