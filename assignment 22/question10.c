#include<stdio.h>
#include<stdlib.h>

int  main()
{
    int n;
    printf("Enter the size of an array\n");
    scanf("%d",&n);

    int *ptr = (int*) calloc(n,sizeof(int));

    int i,min=99,max=0;

    printf("Enter the element of an array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ptr[i]);
    }

    for(i=0;i<n;i++)
    {
        if (ptr[i]<min)
        {
            min  = ptr[i];
        }
        if (max<ptr[i])
        {
            max = ptr[i];
        }
        
        
    }

    printf("\nMaximum = %d and Minimum = %d\n",max,min);
    return 0;
}