#include<stdio.h>

int fact(int n)
{
    int i,a=1;

    for(i=n;i>1;i--)
    {
        a = a*i;
    }

    return a;
}

int npr(int n,int r)
{
    int a;

    a = fact(n)/fact(n-r);
    return a;
}
int main()
{
    int n,r;

    printf("Enter the value of n, r\n");
    scanf("%d %d",&n,&r);

    printf("The npr is %d",npr(n,r));
    return 0;
}