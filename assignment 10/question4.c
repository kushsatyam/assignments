#include<stdio.h>

void print(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        printf("%d ",i);
    }
}


int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);

    print(n);
    return 0;
}