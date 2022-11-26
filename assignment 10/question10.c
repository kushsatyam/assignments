#include<stdio.h>


void prime(int n)
{
    int i=2;
    while (n!=1)
    {
        if (n%i==0)
        {
            n = n/i;
            printf("%d ",i);
        }else{
            i++;
        }
    }
    
}

int main()
{
    int n;

    printf("Enter the number\n");
    scanf("%d",&n);

    prime(n);
    return 0;
}