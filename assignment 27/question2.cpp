#include<iostream>
using namespace std;

class unary{
    int num;
public:
    unary()
    {}

    unary(int x)
    {
        num = x;
    }

    unary operator++(int)     // In postfix we need to pass the int argument but why ?
    {
        unary u;
        u.num = ++num;

        return u;
    }

    unary operator--(int)      // if we use preincrement or predcrement there is no need to pass int argument
    {
        unary u;
        u.num = --num;

        return u;
    }

    void display()
    {
        cout<<num;
    }
};

int main()
{
    unary c1(5),c2(3),c3;

    c3 = c1++;
    c3 = c2--;

    c3.display();

    return 0;
}