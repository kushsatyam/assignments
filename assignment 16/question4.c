#include<stdio.h>
int main()
{
    int a[3][3];
    int i,j,sum =0;

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
            if (i==j)
            {
                sum = sum + a[i][j];
            }
            
        }
    }

    printf("The sum of left diagonal of the matrix is %d",sum);
    return 0;
}
