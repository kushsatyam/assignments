#include<stdio.h>

float simInt(float p, float r, float t)
{
    return (p*r*t)/100;
}

int main()
{
    float p,r,t;

    printf("Please enter the priciple, rate and time\n");
    scanf("%f %f %f",&p,&r,&t);

    printf("The simple interest is %.2f",simInt(p,r,t));
    return 0;
}