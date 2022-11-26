#include<stdio.h>
int main()
{
    int a,b,c,i,flag=1;
    printf("Enter a two number\n");
    scanf("%d %d",&a,&b);

    c = a<b?a:b;

    for(i=c;i>1;i--)
    {
        if (a%i==0 && b%i==0)
        {
            flag=0;
            break;
        }
    }

    if (flag==0)
    {
        printf("H.C.F of %d and %d is %d",a,b,i);
    }else{
        printf("H.C.F of %d and %d is 1",a,b);
    }
    


    return 0;
}