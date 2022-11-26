#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c,d,r1,r2;

    printf("Enter the co-efficient of quadratic equation\n");
    scanf("%f %f %f",&a,&b,&c);
     
    d = b*b-4*a*c;

    switch (d==0)
    {
    case 1:
        r1 = -b/(2*a);
        printf("Both root are real and equal %.2f",r1);
        break;
    case 0:
        switch (d>0)
        {
        case 1:
            r1 = (-b+sqrt(d))/(2*a);
            r2 = (-b-sqrt(d))/(2*a);

            printf("Roots are %.2f and %.2f",r1,r2);
            getch();

            break;
        case 0:
            printf("Roots are imginary");
            break;
        default:
            break;
        }
    default:
        break;
    }
    return 0;
}