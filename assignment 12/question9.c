#include<stdio.h>

void decToct(int n)
{
    int r;

    if (n==0)   //This is base condition when our recursion will stop.
    {
        return;
    }

    r = n%8;
    decToct(n/8);
    printf("%d",r);
}

int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);

    decToct(n);
    return 0;
}