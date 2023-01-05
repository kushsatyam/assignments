#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i,sum=0;

    printf("Enter the size of an array\n");
    scanf("%d",&n);

    int *ptr = (int*) malloc(n*sizeof(int));

    printf("Enter the element of an array\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&ptr[i]);
    }

    for(i=0;i<n;i++)
    {
        sum = sum + ptr[i];
    }

    printf("Sum of %d number is %d",n,sum);

    free(ptr);
    
    return 0;
}
