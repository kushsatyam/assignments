#include<stdio.h>
int main()
{
    int n,count=1,i;
    printf("Enter a number\n");
    scanf("%d",&n);


    while ((n|1) != n)
    {
        count++;
        n = n>>1;
    }

    printf("The position of first 1 is %d",count);
    
    return 0;
}