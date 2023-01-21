#include<iostream>
using namespace std;

class Counter{
    static int count;
public:
    Counter()
    {
        count++;
    }

    void print()
    {
        cout<<count;
    }

};

int Counter::count = 0;

int main()
{
    Counter c1,c2;

    c1.print();
    return 0;
}