#include<stdio.h>
int main()
{
    int i,j;
    char val = 'A';

    for(i=1;i<6;i++)
    {
        val = 'A';
        for(j=1;j<10;j++)
        {
            if (j>=6-i && j<=4+i)
            {
                printf("%c",val);

                if (j<5)
                {
                    val++;
                }else{
                    val--;
                }
                
            }else{
                printf(" ");
            }
            
        }
        printf("\n");
    }
    return 0;
}