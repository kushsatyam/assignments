#include<iostream>
using namespace std;

class Rupee{
    int y;
public:
    Rupee(int a)
    {
        y = a;
    }

    operator  int()
    {
        return y;
    }

};

int main()
{
    Rupee r = 10;

    int x = r;

    cout<<"x = "<<x;

    return 0;
}