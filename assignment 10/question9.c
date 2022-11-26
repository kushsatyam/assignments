#include<stdio.h>

int check(int n,int d)
{
    int a;

    while (n)
    {
        a = n%10;
        if(a==d)
        {
            return 1;
        }
        n = n/10;
    }
    return 0;
}
int main()
{
    int n,d;

    printf("Enter the number\n");
    scanf("%d",&n);

    printf("Enter the digit to check\n");
    scanf("%d",&d);

    if(check(n,d))
    {
        printf("\nYes digit is present in the number");
    }else{
        printf("\nDigit is not present in the number");
    }
    return 0;
}