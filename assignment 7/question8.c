#include<stdio.h>
int main()
{
    int n,i,j,flag;
    printf("Enter a number\n");
    scanf("%d",&n);

    for(i=n+1;i<n*n;i++)
    {
        flag=1;
        for(j=2;j<i;j++)
        {
            if (i%j==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            printf("%d ",i);
            break;
        }
        
    }
    return 0;
}