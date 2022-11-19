#include<stdio.h>
int main()
{
    int n,a,rev=0;
    printf("Enter a number\n");
    scanf("%d",&n);

    while (n)
    {
        a = n%10;
        rev = rev*10+a;
        n = n/10;
    }

    printf("Reverse of given number is %d",rev);
    
    return 0;
}