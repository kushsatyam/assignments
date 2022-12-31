#include<stdio.h>

void sort(int a[],int n)
{
    int i,j,temp;

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if (a[i]>a[j])
            {
                temp = a[i];
                a[i]= a[j];
                a[j] = temp;
            }
            
        }
    }

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
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

    sort(a,size);
    return 0;
}