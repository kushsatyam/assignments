#include<stdio.h>

int freq(int a[],int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        arr[a[i]]++;
    }
}

int main()
{
    int a[10];
    int i;
    int arr[100] = {0};
    int count=0;

    printf("Enter the element of an array\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }

    freq(a,arr,10);


    for(i=0;i<100;i++)
    {
        if (arr[i]==2)
        {
            count++;
        }
        
    }

    printf("\nTotal number of duplicate element int the array is %d",count);
    return 0;
}