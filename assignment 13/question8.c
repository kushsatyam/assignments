#include<stdio.h>

void printFib(int n, int a, int b)
{
    int c;
    if (n==0)
    {
        return;
    }

    c = a+b;
    
    printf("%d ",c);

    a=b;
    b=c;

    printFib(n-1,a,b);
}

int main()
{
    int n,a=-1,b=1;

    printf("Please enter the nth term of fibonacci sries\n");
    scanf("%d",&n);

    printFib(n,a,b);
    return 0;
}