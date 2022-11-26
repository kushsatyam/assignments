#include<stdio.h>
int main()
{
    int i,j,val;

    for(i=1;i<5;i++)
    {
        val=1;
        for(j=1;j<8;j++)
        {
            if (j>=i && j<=8-i)
            {
                printf("%d",val);
                if (j<4)
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