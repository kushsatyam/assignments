#include<stdio.h>

int fact(int n)
{
    int i,a=1;

    for(i=1;i<=n;i++)
    {
        a = a*i;
    }
    return a;
}

int sumofSeries(int n)
{
    int sum;

    sum = 1+fact(n-1);

    return sum;
}

int main()
{
    int n;

    printf("Enter the number of term\n");
    scanf("%d",&n);

    printf("The sum of series is %d ",sumofSeries(n));
    return 0;
}