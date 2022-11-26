#include<stdio.h>
int main()
{
    int a,b,c,d,i,j,flag;

    printf("Enter a two number\n");
    scanf("%d %d",&a,&b);

    c = a<b?a:b;
    d = a>b?a:b;

    for(i=c;i<=d;i++)
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