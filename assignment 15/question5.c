#include<stdio.h>

int dupli(int a[],int n)
{
    int i,d;

    for(i=0;i<n;i++)
    {
        if (a[i]==a[i+1])
        {
            return a[i];
        }
        
    }
}

int main()
{
    int a[10];
    int i,size;

    size = sizeof(a)/sizeof(a[0]);

    printf("Enter the element of an array\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nThe first duplicate is %d",dupli(a,size));

    return 0;
}