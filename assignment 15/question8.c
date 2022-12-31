#include<stdio.h>

int sigle(int a[],int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        arr[a[i]]++;
    }
}

int main()
{
    int a[10];
    int i,arr[100]={0};

    printf("Enter the element of an array\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }

    sigle(a,arr,10);

    for(i=0;i<100;i++)
    {
        if (arr[i]==1)
        {
            printf("%d ",i);
        }
        
    }
    return 0;
}