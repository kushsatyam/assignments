#include<stdio.h>

int max(int a[],int n)
{
    int i,j,max=0;

    for(i=0;i<n;i++)
    {
        if (max<a[i])
        {
            max = a[i];
        }
        
    }
    return max;
}

int main()
{
    int a[10];
    int size;

    printf("Enter the element of an array\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }

    size = sizeof(a)/sizeof(a[0]);

    printf("%d",max(a,size));
    return 0;
}