#include<iostream>
using namespace std;

class Numbers{
private:
    int x,y,z;
public:
    void setData()
    {
        cout<<"Enter the value of x,y,z"<<endl;
        cin>>x>>y>>z;
    }

    void showData()
    {
        cout<<"\n";
        cout<<"x = "<<x<<" y = "<<y<<" z = "<<z<<endl;
    }

    friend void operator-(Numbers &n);
};

void operator-(Numbers &n)
{
    n.x = n.x - 2*n.x;
    n.y = n.y - 2*n.y;
    n.z = n.z - 2*n.z;
}

int main()
{
    Numbers n;

    n.setData();
    -n;

    n.showData();
    return 0;
}