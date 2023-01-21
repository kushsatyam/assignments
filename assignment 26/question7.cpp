#include<iostream>
using namespace std;

class Box{
    int l,b,h;
public:
    Box(int len, int bred, int height)
    {
        l = len; b = bred; h = height;
    }

    int vol();
};

int Box::vol()
{
    return l*b*h;
}

int main()
{
    Box b1(4,5,6);

    cout<<"The volumn of the box is "<<b1.vol();
    return 0;
}