#include<stdio.h>

int sum(int *ptr, int len)
{
    int i,sum =0;

    for(i=0;i<len;i++)
    {
        sum = sum + *(ptr+i);
    }

    return sum;
}

int main()
{
    int a[10];
    int i;

    printf("Enter the element of an array\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }

    int len = sizeof(a)/sizeof(a[0]);
    printf("Sum of the element of an array is %d",sum(a,len));
    return 0;
}