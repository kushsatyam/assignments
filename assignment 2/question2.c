#include<stdio.h>
int main()
{
    int n;

    printf("Enter the number\n");
    scanf("%d",&n);

    n = n/10;

    printf("\nNumber without unit digit %d",n);
    return 0;
}