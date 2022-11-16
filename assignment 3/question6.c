#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter a two number \n");
    scanf("%d %d",&n,&m);

    if (n==m)
    {
        printf("%d",n);
    }else if (n>m)
    {
        printf("%d",n);
    }else{
        printf("%d",m);
    }
    
    
    return 0;
}