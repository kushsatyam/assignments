#include<stdio.h>

int sumOdd(int n)
{
    if (n==0)
    {
        return 0;
    }
    
    return(n*2-1+sumOdd(n-1));
}

int main()
{
    int n;

    printf("Enter the nth term\n");
    scanf("%d",&n);

    printf("The sum of first n odd term is %d",sumOdd(n));
    return 0;
}