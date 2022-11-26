#include<stdio.h>

void printOdd(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        printf("%d ",i*2-1);
    }
}


int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);

    printOdd(n);
    return 0;
}