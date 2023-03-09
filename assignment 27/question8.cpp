#include<iostream>
using namespace std;

class Matrix{
private:
    int a[3][3];
public:
    friend void operator>>(istream &cout,Matrix &m)
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cin>>m.a[i][j];
            }
        }
    }

    friend void operator<<(ostream &cout,Matrix m)
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<m.a[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    friend Matrix operator-(Matrix m)
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                m.a[i][j] = -m.a[i][j];
            }
        }

        return m;
    }
};

int main()
{
    Matrix m;

    cout<<"Enter matrix element (3 X 3) : "<<endl;
    cin>>m;

    cout<<"Matrix is : \n"<<endl;
    cout<<m;

    m = -m;

    cout<<"Matrix is : \n"<<endl;
    cout<<m;
    
    return 0;
}