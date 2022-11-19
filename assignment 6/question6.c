#include<stdio.h>
int main()
{
    int n,sum=1,i;
    printf("Enter a number\n");
    scanf("%d",&n);

    for(i=n;i>=1;i--)
    {
        sum = sum * i;
    }
    printf("Factorial of the number is %d",sum);
    return 0;
}