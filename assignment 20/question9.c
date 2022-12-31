#include<stdio.h>
 
void printReverse(int *a, int size)
{
    int i;

    for(i=size-1;i>=0;i--)
    {
        printf("%d ",*(a+i));
    }
}

 int main()
 {
    int a[10];
    int i;

    printf("Enter the element of array\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }

    printReverse(a,10);
    return 0;
 }