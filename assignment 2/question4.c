#include<stdio.h>
int main()
{
    int a,b;

    printf("Enter a two number a and b\n");
    scanf("%d %d",&a,&b);

    printf("\nBefore swapping number are %d and %d",a,b);

    b = a+b;
    a = b-a;
    b = b-a;

    printf("\nAfter swapping number are %d and %d",a,b);

    return 0;
}