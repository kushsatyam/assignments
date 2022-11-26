#include<stdio.h>
int main()
{
    int year,n;

    printf("Enter a year\n");
    scanf("%d",&year);

    // condition of leap year 
    // 1. year is divisible by 400 is called leap year
    // 2. year is diisible by 4 but not 100 also a leap year

    n = year%400==0 || (year%4==0 && year%100!=0);

    switch ((n))
    {
    case 1:
        printf("It is a leap year");
        break;
    case 0:
        printf("It is not a leap year");
        break;
    default:
        printf("Please enter a valid  year");
        break;
    }
    return 0;
}