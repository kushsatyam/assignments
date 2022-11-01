#include<stdio.h>

int main()
{
    int n;

    printf("Enter a number\n");
    scanf("%d",&n);

    // (n|1)==n ? printf("Odd") : printf("Even");

    (n&1)==0 ? printf("Even") : printf("Odd");

    return 0;
}