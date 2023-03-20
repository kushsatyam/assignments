#include<iostream>
using namespace std;

class Matrix{
protected:
    int a,b,c,d;
public:
    void set_Value()
    {
        cout<<"Enter the element of an matrix one by one"<<endl;
        cin>>a>>b>>c>>d;
    }
};

class Calculate_determinant:public Matrix{
    int determinant;
public:

    Calculate_determinant()
    {
        set_Value();
    }

    void find_determinant()
    {
        determinant = a*d-b*c;
    }

    void display()
    {
        cout<<"\n\nDeterminant : "<<determinant<<endl;
    }
};


int main()
{
    Calculate_determinant d;

    d.find_determinant();
    d.display();

    return 0;
}
