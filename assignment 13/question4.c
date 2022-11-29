#include<stdio.h>

int sumSquare(int n)
{
    if (n==1)
    {
        return 1;
    }
    
    return(n*n+sumSquare(n-1));
}

int main()
{
    int n;

    printf("Enter the nth term\n");
    scanf("%d",&n);

    printf("The sum of square of nth term is %d",sumSquare(n));
    return 0;
}