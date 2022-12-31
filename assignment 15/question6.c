#include<stdio.h>

void reverse(int a[],int n)
{
    for(int i=n-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
}

int main()
{
    int n;
    printf("Enter the size of an array\n");
    scanf("%d",&n);

    int a[n];
    int i;

    printf("Enter the element of an array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    reverse(a,n);

    return 0;
}