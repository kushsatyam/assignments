#include<iostream>
using namespace std;

class Matrix{
private:
    int a[3][3];
public:
    friend void operator>>(istream &cin,Matrix &m)
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cin>>m.a[i][j];
            }
        }
    }

    Matrix operator+(Matrix m)
    {
        Matrix temp;

        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                temp.a[i][j] = a[i][j] + m.a[i][j];
            }
        }

        return temp;
    }

    friend void operator<<(ostream &cout,Matrix m)
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<m.a[i][j]<<"  ";
            }
            cout<<"\n";
        }
    }
};

int main()
{
    Matrix m1,m2,m3;

    cout<<"Enter the element first matrix"<<endl;
    cin>>m1;

    cout<<"\nEnter the element of second marix"<<endl;
    cin>>m2;

    cout<<"\nFirst Matrix : "<<endl;
    cout<<m1;

    cout<<"\nSecond Matrix : "<<endl;
    cout<<m2;

    m3 = m1 + m2;

    cout<<"\n\nThe resultant matrix are  : "<<endl;
    cout<<m3;
    return 0;
}