#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter a number\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        sum = sum + i*i*i;
    }
    printf("The sum of cube of first natural number %d",sum);
    return 0;
}