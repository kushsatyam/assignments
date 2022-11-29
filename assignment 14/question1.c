#include<stdio.h>

int sumof(int a[],int size)     // Here both array in main function and sumof function are same because i can pass only base address. in sumof function int a[] is a pointer variable which meaning is *(a+0).
{
    int i,sum=0;

    for(i=0;i<10;i++)
    {
        sum = sum+a[i];
    }

    return sum;
}

int main()
{
    int a[10];
    int i;

    printf("Enter the 10 element one by one\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Sum of 10 term is %d",sumof(a,10));
    return 0;
}