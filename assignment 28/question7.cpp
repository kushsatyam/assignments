#include<iostream>
using namespace std;

class integer{
private:
    int i;
public:
    void setdata()
    {
        cout<<"Enter the number"<<endl;
        cin>>i;
    }

    void display()
    {
        cout<<"i : "<<i<<endl;
    }
    
    friend integer operator!(integer b)
    {
        integer a;

        a.i = -b.i;
        return a;
    }
};

int main()
{
    integer i;
    i.setdata();
    i.display();

    i = !i;

    i.display();

    return 0;
}