#include<stdio.h>
int main()
{
    int a[10],b[10];
    int i;

    printf("Enter the element of an array\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<10;i++)
    {
        b[i]=a[i];
    }

    printf("\n\nElement of array b\n");

    for(i=0;i<10;i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}