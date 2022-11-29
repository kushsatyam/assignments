#include<stdio.h>

void printNatural(int n)
{
    if (n==0)
    {
        return;
    }
    
    printNatural(n-1);
    printf("%d ",n);
}

int main()
{
    int n;

    printf("Enter the number\n");
    scanf("%d",&n);

    printNatural(n);
    return 0;
}