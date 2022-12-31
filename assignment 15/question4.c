#include<stdio.h>
int main()
{
    int a[5];
    int i,j,n,d,size;
    int temp;

    size = sizeof(a)/sizeof(a[0]);

    printf("Enter the element of an array\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter the number of position you want to rotate\n");
    scanf("%d",&n);

    printf("Enter the direction you want to rotate 1 for left and 0 for right\n");
    scanf("%d",&d);

    if (d==1)
    {
        for(j=1;j<=n;j++)
        {
            temp = a[0];
            for(i=0;i<size;i++)
            {
                a[i] = a[i+1];
            }
            a[size-1] = temp;
        }
    }else{
        
        for(j=1;j<=n;j++)
        {
            temp = a[size-1];
            for(i=size-1;i>=0;i--)
            {
                a[i] = a[i-1];
            }
            a[0] = temp;
        }
    }
    

    for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}