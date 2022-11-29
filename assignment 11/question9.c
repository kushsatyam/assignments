#include<stdio.h>


int square(int n)
{
    return n*n;
}

int main()
{
    int n;

    printf("Enter the number\n");
    scanf("%d",&n);

    printf("%d",square(n));
    
    return 0;
}