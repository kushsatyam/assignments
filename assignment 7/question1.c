#include<stdio.h>
int main()
{
    int i,n,a=-1,b=1,fib;

    printf("Enter a nth term\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        fib = a+b;
        a=b;
        b=fib;
    }

    printf("The nth term of  Fibonnaci series is %d",fib);
    return 0;
}