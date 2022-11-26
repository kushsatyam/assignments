#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int a,b,c,n;
    while (1)
    {
        system("cls");
        printf("1. Check Isoscles Triangle\n");
        printf("2. Check Right angled Triangle\n");
        printf("3. Check Equilateral Triangle\n");
        printf("4. Exit\n");

        printf("Enter your choice\n");
        scanf("%d",&n);

        switch (n)
        {
        case 1:
            printf("Enter three side of an triangle\n");
            scanf("%d %d %d",&a,&b,&c);
            
            if (a==b || b==c || a==c)
            {
                printf("Sides of an isoscles triangle");
            }else{
                printf("It is not a sides of an isoscles triangle");
            }
            getch();
            break;
        case 2:
            printf("Enter three side of an triangle\n");
            scanf("%d %d %d",&a,&b,&c);

            if (a>b && a>c)
            {
                if ((a*a) == (b*b) + (c*c))
                {
                    printf("Sides of right angle triangle");
                }else{
                    printf("Not a side of right angle triangle");
                }
                
            }else if (b>c && b>a)
            {
                if ((b*b) == (a*a) + (c*c))
                {
                    printf("Sides of right angle triangle");
                }else{
                    printf("Not a side of right angle triangle");
                }
                
            }else if (c>a && c>b)
            {
                if ((c*c) == (a*a) + (b*b))
                {
                    printf("Sides of right angle triangle");
                }else{
                    printf("Not a side of right angle triangle");
                }
            }
            getch();
            break;
        case 3:
            printf("Enter three side of an triangle\n");
            scanf("%d %d %d",&a,&b,&c);
            
            if (a==b && b==c)
            {
                printf("It is a side of euilateral triangle");
            }else{
                printf("It is not a side of euilateral triangle");
            }
            
            getch();
            break;
        case 4:
            exit(0);
            break;
        
        default:
            printf("Please enter a valid choice\n");
            getch();
            break;
        }

    }
    
    return 0;
}