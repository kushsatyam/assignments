#include<stdio.h>

int main()
{
    int a,b,c;

    printf("Enter the two number one by one\n");   
    scanf("%d %d",&a,&b);

    printf("Before swapping the number is %d and %d\n",a,b);
    c = a;
    a = b;
    b = c;

    printf("After swapping the number is %d and %d\n",a,b);
    return 0;
}