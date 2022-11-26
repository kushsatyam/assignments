#include<stdio.h>

int fact(int n)
{
    int i,a=1;

    for(i=n;i>1;i--)
    {
        a = a*i;
    }
    return a;
}

int ncr(int n,int r)
{
    int c;
    c= (fact(n))/(fact(n-r)*fact(r));
    return c;
}
int main()
{
    int n,r;

    printf("Enter the value of 'n' and 'r'\n");
    scanf("%d %d",&n,&r);

    printf("Answer is %d",ncr(n,r));
    return 0;
}