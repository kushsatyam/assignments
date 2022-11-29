#include<stdio.h>


int hcf(int a, int b)
{
    while (a!=0 && b!=0)
    {
        if (a>b)
        {
            a=a%b;
        }else{
            b=b%a;
        }
    }

    if (a==0)
    {
        return b;
    }else{
        return a;
    }   
}

int main()
{
    int a,b;

    printf("Enter a two number\n");
    scanf("%d %d",&a,&b);

    printf("HCF of %d and %d is %d",a,b,hcf(a,b));
    return 0;
}
