#include<stdio.h>

int main()
{
    int n;
    int *p;

    printf("Enter the number\n");
    scanf("%d",&n);

    p = &n;

    printf("Address of p %u\n",&p);
    printf("Address of n %u\n",&n);
    printf("Value of p %u\n",p);
    printf("Value at n %d\n",n);
    printf("Value at *p %d\n",*p);

    *p = 15;
    printf("\nValue at n %d\n",n);
    printf("Value at *p %d\n",*p);
    return 0;
}