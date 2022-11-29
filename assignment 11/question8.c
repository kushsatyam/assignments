#include<stdio.h>

int fact(int n)
{
    int i,a=1;
    for(i=1;i<=n;i++)
    {
        a = a*i;
    }

    return a;
}

int combi(int n,int r)
{
    return (fact(n))/(fact(n-r)*fact(r));
}

void pascal(int n)
{
    int i,j,k,r;
   
    for(i=1;i<=n;i++)
    {
        k=1;
        r=0;
        for(j=1;j<2*n;j++)
        {
            if (j>=n+1-i && j<=n-1+i && k==1)
            {
                printf("%d",combi(i-1,r));
                k=0;
                r++;
            }else{
                printf(" ");
                k=1;
            }
            
        }
        printf("\n");
    }
}

int main()
{
    int n;

    printf("Enter the number of rows\n");
    scanf("%d",&n);

    pascal(n);
    return 0;
}