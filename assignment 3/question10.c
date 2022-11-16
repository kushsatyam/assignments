#include<stdio.h>
int main()
{
    float cp,sp,pl,p,l;

    printf("Enter the cost price of product\n");
    scanf("%f",&cp);
    printf("Enter the selling price of product\n");
    scanf("%f",&sp);

    pl = sp - cp;

    if(pl>0)
    {
        p = (pl/cp)*100;
        printf("%.2f%% profit",p);
    }else{
        l = (pl/cp)*100;
        printf("%.2f%% loss",l);  //TO print the % use %% inside the printf function.
    }

    return 0;
}