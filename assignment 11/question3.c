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

int main()
{
    int n;

    printf("Enter a number\n");
    scanf("%d",&n);

    if (isprime(n))
    {
        printf("Yes, it is a prime number");
    }else{
        printf("It is not a prime number");
    }
    
    return 0;
}