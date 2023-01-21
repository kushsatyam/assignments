#include<iostream>
using namespace std;

class Factorial{
    int n;
public:
    Factorial(int a)
    {
        n =a;
    }

    int calFact();
};

int Factorial::calFact()
{
    int fact =1;

    for(int i=n;i>=1;i--)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{
    int n;

    cout<<"Enter the number"<<endl;
    cin>>n;

    Factorial f(n);

    cout<<"Factorial of the number "<<n<<" is "<<f.calFact();
    return 0;
}