#include<stdio.h>

int countDigit(int n)
{
    int count=0;

    if (n==0)
    {
        return 0;
    }
    
    n = n/10;
    count++;

    return(count+countDigit(n));
}

int main()
{
    int n;

    printf("Enter the number\n");
    scanf("%d",&n);

    printf("The number of digit is %d",countDigit(n));
    return 0;
}