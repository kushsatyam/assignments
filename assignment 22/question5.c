#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    printf("Enter the size of an array\n");
    scanf("%d",&n);

    int *ptr = (int*) calloc(n,sizeof(int));
    int i,sum = 0;

    printf("Enter the element of an array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ptr[i]);
    }

    for(i=0;i<n;i++)
    {
        printf("%d ",ptr[i]);
        sum = sum+ptr[i];
    }

    printf("\nThe sum of 10 number is %d",sum);
    free(ptr);
    return 0;
}