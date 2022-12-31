#include<stdio.h>

int min(int a[],int n)
{
    int i,min=999;

    for(i=0;i<n;i++)
    {
        if (min>a[i])
        {
            min = a[i];
        }
        
    }
    return min;
}

int main()
{
    int a[10];
    int i,size;

    printf("Enter the element of an array\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }

    size = sizeof(a)/sizeof(a[0]);


    printf("%d",min(a,size));
    return 0;
}