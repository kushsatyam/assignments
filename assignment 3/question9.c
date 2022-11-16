#include<stdio.h>
int main()
{
    int a,b,c;

    printf("Enter a three number one by one \n");
    scanf("%d %d %d",&a,&b,&c);

    a > b  ?  a>c?printf("\n%d",a):printf("\n%d",c)  :  b>c?printf("\n%d",b):printf("\n%d",c);
    return 0;
}