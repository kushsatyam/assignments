#include<stdio.h>

int sumDigit(int n)
{
    if (n==0)
    {
        return 0;
    }
    
    return(n%10+sumDigit(n/10));
}

int main()
{
    int n;

    printf("Enter the number\n");
    scanf("%d",&n);

    printf("The sum of digit is %d",sumDigit(n));
    return 0;
}