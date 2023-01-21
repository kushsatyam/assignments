#include<iostream>
using namespace std;

int fact(int n)
{
    int fact=1;

    while (n)
    {
        fact = fact * n;
        n = n-1;
    }
    
    return fact;
}

int combi(int n,int r)
{
    int combi;

    combi = fact(n)/(fact(n-r)*fact(r));

    return combi;
}

void printPascal(int n)
{
    for(int i=1;i<=n;i++)
    {
        int k=1;
        int col=0;
        for(int j=1;j<2*n;j++)
        {
            
            if (j>=n+1-i && j<=n-1+i && k)
            {
                cout<<combi(i-1,col);
                k=0;
                col++;
            }else{
                cout<<" ";
                k=1;
            }
        }
        cout<<endl;
    }
}

int main()
{
    int n;

    cout<<"Enter the number of lines"<<endl;
    cin>>n;

    printPascal(n);
    return 0;
}