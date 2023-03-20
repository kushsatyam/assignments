#include<iostream>
using namespace std;

class Value{
    int a;
public:
    Value()
    {}

    Value(int x)
    {
        a = x;
    }

    void swap(Value *q)
    {
        Value temp;
        temp.a = q->a;
        q->a = a;
        a = temp.a;

        cout<<"\n\nSwap Successfull\n"<<endl;
    }

    void display()
    {
        cout<<"a = "<<a<<endl;
    }
};

int main()
{
    Value v1(3),v2(4);

    v1.display();
    v2.display();

    Value *p = &v1;

    p->swap(&v2);

    v1.display();
    v2.display();

    return 0;
}