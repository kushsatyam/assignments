#include<stdio.h>

int main()
{
    int n;

    printf("Enter the number\n");
    scanf("%d",&n);

    n = n%10;

    printf("\nThe unit digit of the number is %d",n);
    return 0;
}