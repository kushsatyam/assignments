#include<stdio.h>

struct Student{
    int year;
    char name[30];
};

int main()
{
    struct Student s[10];
    int i;

    for(i=0;i<5;i++)
    {
        printf("Enter the name of student\n");
        fflush(stdin);
        gets(s[i].name);

        printf("Enter the year of study\n");
        scanf("%d",&s[i].year);
    }

    for(i=0;i<5;i++)
    {
        printf("\nName: %s  Year: %d\n",s[i].name,s[i].year);
    }
    return 0;
}