#include<stdio.h>

int main()
{
    int a[10];
    int i,max=0;

    printf("Enter the element of an array\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }


    for(i=0;i<10;i++)
    {
        if (max<a[i])
        {
            max = a[i];
        }
    }

    printf("\nThe greatest element  in the array is %d",max);
    return 0;
}
