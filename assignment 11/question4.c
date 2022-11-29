#include<stdio.h>

int isprime(int j)
{
    int i;
    for(i=j-1;i>1;i--)
    {
        if (j%i==0)
        {
            return 0;
        }   
    }

    return 1;
}

int nextprime(int n)
{
     int i;

     for(i=n+1;i<n*n;i++)
     {
        if (isprime(i))
        {
            return i;
        }
        
     }
}

int main()
{
    int n;

    printf("Enter the number\n");
    scanf("%d",&n);

    printf("Next prime number is %d",nextprime(n));
    return 0;
}