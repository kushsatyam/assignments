#include<stdio.h>
int check(int n)
{
    if (n%2==0)
    {
        return 1;
    }else{
        return 0;
    }
     
}
int main()
{
    int n;

    printf("Enter a number\n");
    scanf("%d",&n);

    if(check(n))
    {
        printf("Number is even");
    }else{
        printf("Number is odd");
    }
    return 0;
}