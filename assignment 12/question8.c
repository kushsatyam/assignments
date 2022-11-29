#include<stdio.h>

void decTobin(int n)
{
    int r;
    if (n==0)
    {
        return;
    }
    
    r = n%2;

    decTobin(n/2);

    printf("%d",r);
}

int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);

    decTobin(n);
    return 0;
}