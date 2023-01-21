#include<iostream>
using namespace std;

class staticCount{
    static int count;
public:
    void inc_count()
    {
        count++;
    }

    int print()
    {
        return count;
    }
};

int staticCount::count = 0;

int main()
{
    staticCount s;

    s.inc_count();
    s.inc_count();
    s.inc_count();

    cout<<"Count : "<<s.print();
    return 0;
}