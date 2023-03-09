#include<iostream>
using namespace std;

class Integer{
private:
    int x;
public:
    Integer()
    {}

    Integer(int a)
    {
        x = a;
    }

    operator int()
    {
        int a = x;
        return a;
    }
};

int main()
{
    Integer i(5);

    int x = i;

    cout<<"x = "<<x;

    return 0;
}