#include<stdio.h>

int main()
{
    int a[3][3];
    int i,j;
    int count =0;

    printf("Enter the element of an array\n");
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
            if (a[i][j]==0)
            {
                count++;
            }
            
        }
    }

    if (count>=4)
    {
        printf("Matrix is sparse matrix");
    }else{
        printf("Matrix is not a sparse matrix");

    }
    

    return 0;
}