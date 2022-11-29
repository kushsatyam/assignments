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

void printprime(int a, int b)
{
    int i;

    for(i=a;i<b;i++)
    {
        if (isprime(i))
        {
            printf("%d ",i);
        }
        
    }
}

int main()
{
    int a,b;

    printf("Enter the two number\n");
    scanf("%d %d",&a,&b);

    printprime(a,b);
    return 0;
}