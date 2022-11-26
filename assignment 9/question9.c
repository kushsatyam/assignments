#include<stdio.h>
int main()
{
    int n;

    printf("Enter a number\n");
    scanf("%d",&n);

    switch (n%2==0)
    {
    case 1:
        n = n+1;
        printf("Upper odd no is %d",n);
        break;
    case 0:
        printf("%d is already an odd number",n);
        break;
    default:
        printf("!------Error-------!");
        break;
    }
    return 0;
}