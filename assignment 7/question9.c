#include<stdio.h>
int main()
{
    int n,a,b,arm=0;

    printf("Enter a number\n");
    scanf("%d",&n);

    a=n;

    if (n<=9)
    {
        while(a)
        {
            b = a%10;
            arm = arm + b;
            a = a/10;
        }
    }else if (n>=10 && n<=99)
    {
        while(a)
        {
            b = a%10;
            arm = arm + b*b;
            a = a/10;
        }
    }else{
        while(a)
        {
            b = a%10;
            arm = arm + b*b*b;
            a = a/10;
        }

    }

    if (arm==n)
    {
        printf("Its an armstrong number");
    }else{
        printf("It is not an armstrong number");
    }

    
    return 0;
}