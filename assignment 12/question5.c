#include<stdio.h>

void evenNum(int n)
{
    if (n==0)
    {
        return;
    }
    
    evenNum(n-1);
    printf("%d ",2*n);
}


int main()
{
    int n;

    printf("Enter the number\n");
    scanf("%d",&n);

    evenNum(n);
    return 0;
}