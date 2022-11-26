#include<stdio.h>
int main()
{
    int i,j;

    for(i=1;i<6;i++)
    {
        for(j=1;j<10;j++)
        {
            if (i==5 || j==6-i || j==4+i)
            {
                printf("*");
            }else{
                printf(" ");
            }
            
        }
        printf("\n");
    }
    return 0;
}