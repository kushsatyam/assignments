#include<stdio.h>
int main()
{
    int n;
    printf("Enter a week day\n");
    scanf("%d",&n);

    switch (n)
    {
    case 1:
        printf("Monday is a good day");
        break;
    case 2:
        printf("Tuesday Om mangal");
        break;
    case 3:
        printf("The wedding Wednesday");
        break;
    case 4:
        printf("Thunder thursday");
        break;
    case 5:
        printf("Friday fry");
        break;
    case 6:
        printf("Sunny Saturday");
        break;
    case 7:
        printf("The Weekend");
        break;
    default:
        printf("Please Enter a valid choice");
        break;
    }
    return 0;
}