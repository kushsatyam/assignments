#include<iostream>
using namespace std;

int fib(int n)
{
    int fib=0;
    int a=-1,b=1;

    while (fib<n)
    {
        fib = a+b;
        a = b;
        b = fib;

        if (fib == n)
        {
            return 1;
        }
    }

    if (fib == 0)
    {
        return 1;
    }

    return 0;
}

int main()
{
    int n;

    cout<<"Enter the number"<<endl;
    cin>>n;

    if (fib(n))
    {
        cout<<"Yes, number is present in the fib.. series"<<endl;
    }else{
        cout<<"No, number is not present in the fib.. series"<<endl;
    }
    
    return 0;
}