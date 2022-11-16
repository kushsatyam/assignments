#include<stdio.h>
int main()
{
    int a,b,c,d,e;

    printf("Enter the marks of first subject\n");
    scanf("%d",&a);
    printf("Enter the marks of second subject\n");
    scanf("%d",&b);
    printf("Enter the marks of third subject\n");
    scanf("%d",&c);
    printf("Enter the marks of fourth subject\n");
    scanf("%d",&d);
    printf("Enter the marks of fifth subject\n");
    scanf("%d",&e);

    if (a<33 || b<33 || c<33 || d<33 || e<33)
    {
        printf("\nYou are failed in the examination");
    }else{
        printf("\nYou are passed the examination");
    }
    
    return 0;
}