#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);

    if(n%5==0)
        printf("Number is divisible by 5");
    else
        printf("Number is can't divisible by 5");
    
    return 0;
}