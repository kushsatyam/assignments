#include<stdio.h>

int sumOfeven(int n)
{
    if (n==0)
    {
        return 0;
    }
    
    return(n*2+sumOfeven(n-1));
}

int main()
{
    int n;
    printf("Enter the nth term\n");
    scanf("%d",&n);

    printf("The sum of first n even number is %d",sumOfeven(n));
    return 0;
}