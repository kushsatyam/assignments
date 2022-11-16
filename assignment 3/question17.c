#include<stdio.h>
int main()
{
    int a,b,c;

    printf("Enter the side of triangle one by one\n");
    scanf("%d %d %d",&a,&b,&c);

    if (a+b <c)
    {
        printf("Invalid side of triangle");
    }else if (b+c < a)
    {
        printf("Invalid side of triangle");
    }else if (c+a < b)
    {
        printf("Invalid side of triangle");
    }else{
        printf("All side of triangle is valid");
    }
    return 0;
}