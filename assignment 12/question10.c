#include<stdio.h>

void reverseNo(int n)
{
    if (n==0)
    {
        return;
    }

    printf("%d",n%10);
    reverseNo(n/10);
}

int main()
{
    int n;

    printf("Enter the number\n");
    scanf("%d",&n);

    reverseNo(n);
    return 0;
}