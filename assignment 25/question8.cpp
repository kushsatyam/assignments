#include<iostream>
using namespace std;

class Rectangle{
    int l,b;
public:
    Rectangle(int x, int y)
    {
        l=x; b=y;
    }

    int area()
    {
        return l*b;
    }
};

int main()
{
    int l,b;

    cout<<"Enter the length and breadth of the rectangle"<<endl;
    cin>>l>>b;

    Rectangle r(l,b);

    cout<<"Area of the rectangle is "<<r.area();

    return 0;
}