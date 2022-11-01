#include<stdio.h>

int main()
{
    float r,u;
    printf("Enter a amount in rupee \n");
    scanf("%f",&r);

    u = r/76.23;

    printf("Amount is %.2f USD",u);
    return 0;
}