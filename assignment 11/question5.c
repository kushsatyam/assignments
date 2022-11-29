#include<stdio.h>

int isprime(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if (n%i==0)
        {
            return 0;
        }
    }
    return 1;
}

void primeNo(int n)
{
    int i,count=0;
    for(i=1;count!=n;i++)
    {
        if (isprime(i))
        {
            printf("%d ",i);
            count++;
        }
    }
}

int main()
{
    int n,i;

    printf("Enter the number\n");
    scanf("%d",&n);

    primeNo(n);
    return 0;
}