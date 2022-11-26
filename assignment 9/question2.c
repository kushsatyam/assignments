#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int a,b,c,n;
    while (1)
    {
        system("cls");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Division\n");
        printf("4. Multiplication\n");
        printf("5. Exit\n");

        printf("Enter your choice\n");
        scanf("%d",&n);

        switch (n)
        {
        case 1:
            printf("Enter a two number\n");
            scanf("%d %d",&a,&b);
            c = a+b;
            printf("\nSum is %d",c);
            getch();
            break;
        case 2:
            printf("Enter a two number\n");
            scanf("%d %d",&a,&b);
            c = a-b;
            printf("Subtraction is %d",c);
            getch();
            break;
        case 3:
            printf("Enter a two number\n");
            scanf("%d %d",&a,&b);

            c = a/b;
            printf("Division is %d",c);
            getch();
            break;
        case 4:
            printf("Enter a two number\n");
            scanf("%d %df",&a,&b);
            c = a*b;
            printf("Multiplication is %d",c);
            getch();
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("Please enter a valid choice");
            getch();
            break;
        }
    }
    
    return 0;
}