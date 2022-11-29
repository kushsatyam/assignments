#include<stdio.h>

int avg(int a[],int size)
{
    int i,sum=0;

    for(i=0;i<10;i++)
    {
        sum = sum+a[i];
    }

    return (sum/10);
}

int main()
{
    int a[10],i;

    printf("Enter the element of an array one by one\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("The average of 10 number is %d",avg(a,10));
    return 0;
}