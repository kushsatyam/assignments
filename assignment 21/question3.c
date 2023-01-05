#include<stdio.h>

struct Employee{
    char name[30];
    int id;
    int salary;
};

void input(struct Employee *e)
{
    printf("Enter the Employee ID\n");
    scanf("%d",&(e->id));                  // &e->id is similar to the &(e->id)

    printf("Enter the employee name\n");
    fflush(stdin);
    gets(e->name);

    printf("Enter the employee salary\n");
    scanf("%d",&(e->salary));
}

void display(struct Employee e)
{
    printf("\nEmployee ID : %d\n",e.id);
    printf("Employee Name : %s\n",e.name);
    printf("Employee Salary : %d",e.salary);
}

int main()
{
    struct Employee e;

    input(&e);
    display(e);
    return 0;
}