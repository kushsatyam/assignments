#include<stdio.h>

void printEven(int n)
{
    if (n==0)
    {
        return;
    }
    
    printf("%d ",n*2);

    printEven(n-1);
}

int main()
{
    int n;

    printf("Enter a number\n");
    scanf("%d",&n);

    printEven(n);
    return 0;
}