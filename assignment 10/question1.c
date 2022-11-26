#include<stdio.h>

float area(float r)
{
    float area;

    area = 3.14*r*r;
    return area;
}


int main()
{
    float r;
    printf("Enter the radius of circle\n");
    scanf("%f",&r);

    printf("The area of the circle of radius %.2f is %.2f",r,area(r));
    return 0;
}