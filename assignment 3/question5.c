#include<stdio.h>
int main()
{
    int n,count =0;
    printf("Enter a number\n");
    scanf("%d",&n);

    while (n)
    {
        n = n/10;
        count++;
    }

    if (count == 3)
    {
        printf("It is a three digit number");
    }else{
        printf("It is not a three digit number");
    }
    
       
    return 0;
}