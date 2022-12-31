#include<stdio.h>
int main()
{
    int a[3][3];
    int i,j;
    int sumC=0,sumR=0;

    printf("Enter the element of an matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Sum of row\n");
    for(i=0;i<3;i++)
    {
        sumR=0;
        for(j=0;j<3;j++)
        {
            sumR = sumR + a[i][j];
        }
        printf("%d\n",sumR);
    }

    printf("\nSum of column\n");
    for(i=0;i<3;i++)
    {
        sumC=0;
        for(j=0;j<3;j++)
        {
            sumC = sumC + a[j][i];
        }
        printf("%d ",sumC);
    }

    return 0;
}