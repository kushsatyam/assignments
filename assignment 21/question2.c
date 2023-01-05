#include<stdio.h>

struct Employee{
    int id;
    char name[30];
    int salary;
};

void input(struct Employee *e)
{
    printf("Enter the Employee ID\n");
    scanf("%d",&(e->id));

    printf("Enter the employee name\n");
    gets(e->name);

    printf("Enter the employee salary\n");
    scanf("%d",&e->salary);
}

int main()
{
    struct Employee e;
    return 0;
}