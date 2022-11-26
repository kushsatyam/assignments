#include<stdio.h>
int main()
{
    int i,j,flag;

    for(i=1;i<=100;i++)
    {
        flag=1;
        for(j=i-1;j>1;j--)
        {
            if (i%j==0)
            {
                flag=0;
                break;
            }
        }
        if (flag==0)
        {
            printf("");
        }else{
            printf("%d ",i);
        }
    }
    return 0;
}