#include<stdio.h>
int main()
{
    int n,sum=0,i;
    printf("Enter a number\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        sum = sum + i*2-1;
    }
    printf("The sum of n odd no. %d",sum);
    return 0;
}