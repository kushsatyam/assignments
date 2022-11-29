#include<stdio.h>

void fib(int n)
{
    int a=-1,b=1,i,c;

    for(i=1;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
    }
}

int main()
{
    int n;

    printf("Enter the number\n");
    scanf("%d",&n);

    fib(n);
    return 0;
}