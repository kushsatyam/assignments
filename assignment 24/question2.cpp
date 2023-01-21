#include<iostream>
using namespace std;

int highValue(int n)
{
    int i,max=0;

    while (n)
    {
        i=n%10;

        if (i>max)
        {
            max =i;
        }
        n = n/10;
    }
    return max;
}

int main()
{
    int n;

    cout<<"Enter the number"<<endl;
    cin>>n;

    cout<<"Highest digit value is "<<highValue(n);

    return 0;
}