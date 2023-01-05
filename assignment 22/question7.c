#include<stdio.h>

int main()
{
    int n;

    printf("Enter the size of an array\n");
    scanf("%d",&n);

    int *ptr = (int *) calloc(n,sizeof(int));  

    // free(ptr);   first we to free the memory block of address inside ptr

    int a=5;
    ptr = &a;   // Now the ptr pointer point to the variable a without release the memory of ptr. 
    
    printf("The element inside ptr is %d",*ptr);
    free(ptr);
    return 0;
}