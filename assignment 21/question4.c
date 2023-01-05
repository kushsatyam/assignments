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

int maxSalary(struct Employee e[], int size)
{
    int i,max = 0;

    for(i=0;i<size;i++)
    {
        if (e[i].salary>max)
        {
            max = e[i].salary;
        }
    }

    return max;
}

int main()
{
    struct Employee e[5];
    int i;
    int size;

    for(i=0;i<5;i++)
    {
        input(&e[i]);
        printf("\n");
    }

    size = sizeof(e)/sizeof(e[0]);

    printf("\nMaximum Salary is %d\n",maxSalary(e,size));

    return 0;
}

