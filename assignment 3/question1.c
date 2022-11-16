#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);

    if(n>0)
        printf("Number is positive");
    else
        printf("Number is Non positive");
        
    return 0;
}