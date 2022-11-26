#include<stdio.h>

int factorial(int n)
{
    int a=1,i;

    for(i=n;i>1;i--)
    {
        a = a*i;
    }
    return a;
}
int main()
{
    int n;

    printf("Enter a number\n");
    scanf("%d",&n);

    printf("Factorial of %d is %d",n,factorial(n));
    return 0;
}