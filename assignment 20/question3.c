#include<stdio.h>

void sort(int *arr, int size)
{
    int i,j,temp;

    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if (*(arr+i)>*(arr+j))
            {
                temp = *(arr+i);
                *(arr+i) = *(arr+j);
                *(arr+j) = temp;
            }
        }
    }
}

int  main()
{
    int arr[10];
    int i;

    printf("Enter the element of an array\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }

    int size = sizeof(arr)/sizeof(arr[0]);

    sort(arr,size);

    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}