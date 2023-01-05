#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;

    printf("Enter the number of byte you want to create\n");
    scanf("%d",&n);

    int *ptr = (int*) malloc(n);

    if(ptr=NULL)
    {
        printf("\nMemory allocation is failed\n");
    }else{
        printf("\nDynamic array is created succesfully");
    }


    free(ptr);
    return 0;
}