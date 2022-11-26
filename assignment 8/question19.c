#include<stdio.h>
int main()
{
    int i,j;

    for(i=1;i<14;i++)
    {
        for(j=1;j<20;j++)
        {
            if (i<=3)
            {
                if ((j>=4-i && j<=6+i) || (j>=14-i && j<=16+i))
                {
                    printf("*");
                }else{
                    printf(" ");
                }
            }else{
                if (j>=i-3 && j<=23-i)
                {
                    printf("*");
                }else{
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}