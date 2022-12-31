#include<stdio.h>

int main()
{
    int a[3][3];
    int i,j;

    printf("Enter the element of an array\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Lower triangular matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if ( j<=i)
            {
                printf("%d ",a[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}