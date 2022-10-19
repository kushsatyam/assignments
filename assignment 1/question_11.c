#include<stdio.h>
int main()
{
    int hh,mm;
    printf("Enter the time format in HH:MM\n");
    scanf("%d:%d",&hh,&mm);

    printf("\n%d hour and %d minute",hh,mm);
    return 0;
}