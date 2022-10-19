#include<stdio.h>

int main()
{
    int day,month,year;

    printf("Enter the date in format DD/MM/YYYY\n");
    scanf("%d/%d/%d",&day,&month,&year);

    printf("\nDay - %d, Month - %d, Year - %d",day,month,year);

    return 0;
}