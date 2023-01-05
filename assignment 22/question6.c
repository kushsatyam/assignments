#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    printf("Enter the size of an array\n");
    scanf("%d",&n);

    int *ptr = (int*) calloc(n,sizeof(int));
    int i,max=0;

    for(i=0;i<n;i++)
    {
        scanf("%d",&ptr[i]);
    }

    for(i=0;i<n;i++)
    {
        if (max<ptr[i])
        {
            max = ptr[i];
        }
    }

    printf("\nThe largest element in the array is %d",max);

    free(ptr);
    return 0;
}