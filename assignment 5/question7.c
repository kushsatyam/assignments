#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter a number\n");
    scanf("%d",&n);

    for(i=n;i>=1;i--)
    {
        printf("%d ",2*i);
    }
    return 0;
}