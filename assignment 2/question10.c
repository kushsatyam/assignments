#include<stdio.h>
int main()
{
    int n,d;
    printf("Enter a number and digit\n");
    scanf("%d %d",&n,&d);
    
    n = n*10;
    n = n + d;

    printf("%d",n); 
    return 0;
}