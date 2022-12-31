#include<stdio.h>

void merge(int a[],int b[],int c[],int n)
{
    int i=0,j=0,k=0;

    while (i!=n && j!=n)
    {
        if (a[i]>b[j])
        {
            c[k] = a[i];
            i++;
        }else{
            c[k] = b[j];
            j++;
        }
        k++;
    }

    if (i==n)
    {
        while (j!=n)
        {
            c[k] = b[j];
            j++;
            k++;
        }
    }else{
        while (i!=n)
        {
            c[k] = a[i];
            i++;
            k++;
        }
    }
}

int main()
{
    int a[10];
    int b[10],i;
    int c[10];

    printf("Enter the element of an array 1\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter the element of an array 2\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&b[i]);
    }

    merge(a,b,c,5);

    printf("\n");

    for(i=0;i<10;i++)
    {
        printf("%d ",c[i]);
    }
    return 0;
}