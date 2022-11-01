#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter a number\n");
    scanf("%d",&n);

    sum = n%10;
    n = n/10;
    sum = sum + n%10;
    n = n/10;
    sum = sum + n;

    printf("The sum of digit is %d",sum);
    
    return 0;
}