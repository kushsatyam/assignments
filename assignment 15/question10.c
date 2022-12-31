#include<stdio.h>

void frequency(int a[],int arr[],int n)
{
    int i;

    for(i=0;i<n;i++)
    {
        arr[a[i]]++;
    }
}

int  main()
{
    int a[10];
    int i;
    int arr[100]={0};

    printf("Enter the element of an array element should be less then 100\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }

    frequency(a,arr,10);

    printf("The frequency of the element of an array is given below \n\n");
    for(i=0;i<100;i++)
    {
        if (arr[i]>0)
        {
            printf("%d --> %d\n",i,arr[i]);
        }
        
    }
    return 0;
}