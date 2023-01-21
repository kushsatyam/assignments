#include<iostream>
using namespace std;

int checkPrime(int n)
{
    int i;

    for(i=2;i<=n/2;i++)
    {
        if (n%i==0)
        {
            return 0;
        }
        
    }
    return 1;
}

int main()
{
    int n;

    cout<<"Enter a number"<<endl;
    cin>>n;

    if (checkPrime(n))
    {
        cout<<n<<" is a prime number";
    }else{
        cout<<n<<" is not a prime number";
    }
    
    return 0;
}