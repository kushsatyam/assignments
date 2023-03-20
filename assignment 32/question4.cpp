#include<iostream>
using namespace std;

class Addition{
private:
    int sum;
public:
    void ssum(int a,int b)
    {
        sum = a+b;
        cout<<"sum = "<<sum<<endl;

    }

    void ssum(int a, int b, int c)
    {
        sum = a+b+c;
        cout<<"sum = "<<sum<<endl;
    }
};

int main()
{
    Addition a;

    a.ssum(2,3);
    a.ssum(2,3,9);
    return 0;
}