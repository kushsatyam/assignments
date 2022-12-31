#include<stdio.h>

int main()
{
    int a[3][3];
    int i,j,max=0,count[3] = {0};

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if (a[i][j]==1)
            {
                count[i]++;
            }
        }
    }

    for(i=0;i<3;i++)
    {
        if (count[i]>max)
        {
            max = i;
        }
        
    }

    printf("%d row has maximum number of 1s\n",max+1);
    
    
    return 0;
}