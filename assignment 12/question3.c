#include<stdio.h>

void oddNum(int n)
{
    if(n==0)
    {
        return;
    }

    oddNum(n-1);
    printf("%d ",n*2-1);
}

int main()
{
    int n;

    printf("Enter the number\n");
    scanf("%d",&n);

    oddNum(n);
    return 0;
}