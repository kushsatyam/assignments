#include<stdio.h>
int main()
{
    int n,p;
    printf("Enter a number \n");
    scanf("%d",&n);

    p = n%10;
    n = n/10;

    n = p*100 + n;

    printf("After rotate the digit number is %d",n);
    return 0;
}