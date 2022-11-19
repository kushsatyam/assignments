#include<stdio.h>
int main()
{
    int n,m,a,i;
    printf("Enter a two number\n");
    scanf("%d%d",&n,&m);

    a = n>m?n:m;

    for(i=a;i<=n*m;i++)
    {
        if (i%n==0 && i%m==0)
        {
            a = i;
            break;
        }
    }

    printf("The L.C.M of %d and %d is %d",n,m,a);
    return 0;
}