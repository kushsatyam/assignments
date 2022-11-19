#include<stdio.h>
int main()
{
    int n,count=0,i;
    printf("Enter a number\n");
    scanf("%d",&n);

    while (n)
    {
        n = n/10;
        count++;
    }
    
    printf("The number of digit is %d",count);
    return 0;
}