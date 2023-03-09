#include<iostream>
using namespace std;

class Marks{
    int marks;
public:
    Marks()
    {
        marks = 10;
    }

    void print()
    {
        cout<<"marks = "<<marks;
    }

    Marks* operator->() 
    {
        return this;
    }
};

int main()
{
    Marks m1;   // Every object has one pointer variable which is this pointer.


    m1.print();
    m1->print();  // yha pr print function call hogya hai.
    return 0;
}