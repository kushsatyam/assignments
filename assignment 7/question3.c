#include<stdio.h>
int main()
{
    int i,a=-1,b=1,c,j,n;

    printf("Enter a number\n");
    scanf("%d",&n);

    if (n<=8)
    {
        j=9;
    }else{
        j=n;
    }
    

    for(i=1;i<j;i++) 
    {
        c=a+b;
        a=b;
        b=c;

        if (c==n)
        {
            break;
        }
    }

    if (c==n)
    {
        printf("Number is present in the fib series");
    }else{
        printf("Number is not present in the series");
    }
    
    return 0;
}