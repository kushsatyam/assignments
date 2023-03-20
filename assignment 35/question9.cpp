#include<iostream>
using namespace std;

template<class T>
class Add{
protected:
    T a,b;
public:
    Add()
    {
        cout<<"Enter the value of a and b"<<endl;
        cin>>a>>b;
    }

    T addition()
    {
        return a+b;
    }
};

int main()
{
    Add <float>a;

    cout<<"Addition : "<<a.addition();
    return 0;
}
