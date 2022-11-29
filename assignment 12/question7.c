#include<stdio.h>

void printSquare(int n)
{
    if (n==0)
    {
        return;
    }
    
    printSquare(n-1);
    printf("%d ",n*n);
}

int main()
{
    int n;

    printf("Enter the nth term\n");
    scanf("%d",&n);

    printSquare(n);
    return 0;
}