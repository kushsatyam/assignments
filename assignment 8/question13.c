#include<stdio.h>
int main()
{
    int i,j;
    char val = 'A';

    for(i=1;i<8;i++)
    {
        val='A';
        for(j=1;j<14;j++)
        {
            if (j<=8-i || j>=6+i)
            {
                printf("%c",val);
            }else{
                printf(" ");
            }
            if (j<7)
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