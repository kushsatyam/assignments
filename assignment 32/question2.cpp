#include<iostream>
using namespace std;

class Rectangle{
    public:
    int area(int l,int b)
    {
        return l*b;
    }

    float area(int a,float c)
    {
        return float(a*c);
    }

    float area(float l, int b)
    {
        return float(l*b);
    }

    float area(float l,float b)
    {
        return float(l*b);
    }
};

int main()
{
    Rectangle r;

    cout<<"Area : "<<r.area(3,5)<<endl;
    cout<<"Area : "<<r.area(float(3.5),5)<<endl;
    cout<<"Area : "<<r.area(3,float(5.2))<<endl;
    cout<<"Area : "<<r.area(float(3.5),float(5.9))<<endl;
    
    return 0;
}