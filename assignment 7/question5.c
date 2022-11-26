#include<stdio.h>
int main()
{
    int a,b,i,c,hcf;
    printf("Enter a two number\n");
    scanf("%d %d",&a,&b);

    c = a<b?a:b;

    for(i=1;i<=c;i++)
    {
        if (a%i==0 && b%i==0)
        {
            hcf = i;
        }
    }

    if (hcf==1)
    {
        printf("The number are co-prime number");
    }else{
        printf("The number are not a co-prime number");
    }
    
    return 0;
}