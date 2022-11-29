#include<stdio.h>

int main()
{
    int a[10];
    int i,min;

    printf("Enter the size of an array \n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }

    min = a[0];

    for(i=0;i<10;i++)
    {
        if (min>a[i])
        {
            min = a[i];
        }
    }

    printf("The minimum element of an array is %d",min);
    return 0;
}