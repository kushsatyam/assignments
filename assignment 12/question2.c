#include<stdio.h>

void printRev(int n)
{
    if (n==0)
    {
        return;
    }
    
    printf("%d ",n);
    printRev(n-1);
}


int main()
{
    int n;

    printf("Enter the  number\n");
    scanf("%d",&n);

    printRev(n);
    return 0;
}