#include<iostream>
using namespace std;

class reverseNumber{
    int n;
public:
    reverseNumber(int x)
    {
        n = x;
    }

    int reverse()
    {
        int a,num=0;
        
        while (n)
        {
            a = n%10;
            num = num*10 + a;
            n = n/10;
        }
        
        return num;
    }
};

int main()
{
    int n;

    cout<<"Enter the number"<<endl;
    cin>>n;

    reverseNumber r(n); 

    cout<<"The reverse of the number is "<<r.reverse();
    return 0;
}