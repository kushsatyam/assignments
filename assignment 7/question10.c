#include <stdio.h>
int main()
{
    int n, a, b, i,arm;


    for (i = 1; i <= 1000; i++)
    {
        n=i;
        a=n;
        arm=0;
        if (n <= 9)
        {
            while (a)
            {
                b = a % 10;
                arm = arm + b;
                a = a / 10;
            }
        }
        else if (n >= 10 && n <= 99)
        {
            while (a)
            {
                b = a % 10;
                arm = arm + b * b;
                a = a / 10;
            }
        }
        else if(n>=100 && n<1000)
        {
            while (a)
            {
                b = a % 10;
                arm = arm + b * b * b;
                a = a / 10;
            }
        }
        if (i==arm)
        {
            printf("%d ",arm);
        }
        
    }

    return 0;
}