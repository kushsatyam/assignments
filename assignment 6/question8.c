#include<stdio.h>
int main()
{
    int n,i,flag=1;
    printf("Enter a number\n");
    scanf("%d",&n);

    for(i=2;i<n;i++)
    {
        if (n%i==0)
        {
            flag =0;
        }
    }

    if (flag)
    {
        printf("It is a prime number");
    }else{
        printf("It is a not prime number");
    }
    
    return 0;
}