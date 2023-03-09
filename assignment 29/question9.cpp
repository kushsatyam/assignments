#include<iostream>
using namespace std;

class Dollar{
    int dol;
public:
    Dollar(int x)
    {
        dol = x;
    }

    void display()
    {
        cout<<"Dollar : "<<dol;
    }
};

int main()
{
    int x = 50;
    Dollar d = x;

    d.display();
    return 0;
}