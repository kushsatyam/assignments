#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number \n");
    scanf("%d",&n);

    n = n/10;
    n = n*10;
    printf("%d",n);  
    return 0;
}