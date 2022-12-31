#include<stdio.h>

void swap(int *p, int *q)
{
    int temp;

    temp = *p;
    *p = *q;
    *q = temp;
}


int main()
{
    int a,b;

    printf("Enter the two number\n");
    scanf("%d %d",&a,&b);

    swap(&a,&b);

    printf("\nValue of a = %d\nValue of b = %d",a,b);    
    return 0;
}