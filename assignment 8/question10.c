#include<stdio.h>
int main()
{
    int i,j,val;

    for(i=1;i<5;i++)
    {
        val=1;
        for(j=1;j<8;j++)
        {
            if (j<=5-i || j>= 3+i)
            {
                printf("%d",val);
            }else{
                printf(" ");
            }
            if (j<4)
            {
                val++;
            }else{
                val--;
            }
        }
        printf("\n");
    }
    return 0;
}