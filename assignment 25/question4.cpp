#include<iostream>
using namespace std;

class largestNumber{
    int a,b,c;
public:
    largestNumber(int x, int y, int z)
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

    largestNumber l(a,b,c);

    cout<<"Largest number among three is "<<l.largest(); 
    return 0;
}