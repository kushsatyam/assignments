#include<stdio.h>


int find(int *a, int c, int d, int len)
{
    int i,max=0,j;

    for(i=0;i<len;i++)
    {
        if (*(a+i) == c)
        {
            for(j=i+1;*(a+j)!=d;j++)
            {
                if (a[j]>max)
                {
                    max = a[j];
                }
            }
            return max;
        }
        
    }
    return max;
}

int main()
{
    int a[10];
    int i,len,c,d;

    printf("Enter the element of an array\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }

    len = sizeof(a)/sizeof(a[0]);

    printf("Enter the number between you find\n");
    scanf("%d %d",&c,&d);

    printf("Maximum element in the array between %d and %d is %d",c,d,find(a,c,d,len));
    return 0;
}