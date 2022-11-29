#include<stdio.h>

int hcf(int a, int b)
{
    int r;

    if (a==0)
    {
        return b;
    }else if(b==0){
        return a;
    }
    

    if (a>b)
    {
        r = hcf(a%b,b);
    }else if (b>a)
    {
        r= hcf(a,b%a);
    }
    return r;
}

int main()
{
    int a,b;

    printf("Enter a two number\n");
    scanf("%d %d",&a,&b);

    printf("The HCF of %d and %d is %d",a,b,hcf(a,b));
    return 0;
}