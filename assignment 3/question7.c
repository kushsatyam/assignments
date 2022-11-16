#include<stdio.h>
int main()
{
    double a,b,c,discriminent;
    printf("Enter a value of coefficient of quadratic equation a,b and c respectively\n");
    scanf("%lf %lf %lf",&a,&b,&c);

    discriminent = b*b - 4*a*c;

    if (discriminent > 0)
    {
        printf("Root are real and distinct");
    }else if (discriminent < 0)
    {
        printf("img roots");
    }else{
        printf("Roots are real and equal");
    }
    
    return 0;
}