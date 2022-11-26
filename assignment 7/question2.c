#include<stdio.h>
int main()
{
    int i,n,a=-1,b=1,fib;

    printf("Enter the nth term of fibonnaic series\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        fib = a+b;
        a=b;
        b=fib;
        printf("%d ",fib);
    }

    return 0;
}