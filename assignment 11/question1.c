#include<stdio.h>

int lcm(int a, int b)
{
    int n,i;

    n = a>b?a:b;

    for(i=n;i<a*b;i++)
    {
        if(i%a==0 && i%b==0)
        {
            n = i;
            break;
        }
    }
    return n;
}
int main()
{
    int a,b;

    printf("Enter the two number\n");
    scanf("%d %d",&a,&b);

    printf("LCM of %d and %d is %d",a,b,lcm(a,b));
    return 0;
}