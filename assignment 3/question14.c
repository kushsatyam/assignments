#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);

    if (n%7==0 || n%3==0)
    {
        printf("Number is divisible by 7 or 3");
    }else{
        printf("Number is not divisible by 7 or 3");
    }
    
    return 0;
}