#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i;
    int avg=0;

    printf("Enter the size of an array\n");
    scanf("%d",&n);

    int *ptr = (int*) calloc(n,sizeof(int));


    printf("\nEnter the element of an array\n\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
    }

    for(i=0;i<n;i++)
    {
        avg = avg + ptr[i];
    }

    avg = avg/n;

    printf("The average of the %d number is %d",n,avg);

    free(ptr);
    return 0;
}
