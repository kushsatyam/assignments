#include<stdio.h>

int fact(int n)
{
    if (n==1)
    {
        return 1;
    }
    
    return(n*fact(n-1));
}

int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);

    printf("The factorial of the number is %d",fact(n));
    return 0;
}