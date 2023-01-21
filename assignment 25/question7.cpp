#include<iostream>
using namespace std;

class Greatest{
    int a,b,c;
public:
    Greatest(int x, int y, int z)
    {
        a=x;b=y;c=z;
    }

    int largest()
    {
        int z;
        
        z = a>b? a>c?a:c : b>c?b:c;

        return z; 
    }
};

int main()
{
    int a,b,c;

    cout<<"Enter the three number"<<endl;
    cin>>a>>b>>c;

    Greatest l(a,b,c);

    cout<<"Largest number among three is "<<l.largest(); 
    return 0;
}