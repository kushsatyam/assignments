#include<stdio.h>

int power(int n, int a)
{
    if (a==0)
    {
        return 1;
    }

    return(n*power(n,a-1));
    
}

int main()
{
    int n,a;

    printf("Enter the number and its power\n");
    scanf("%d %d",&n,&a);

    printf("%d the power of %d is %d",n,a,power(n,a));
    return 0;
}