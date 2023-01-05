#include<stdio.h>

struct Student{
    int roll_no;
    char name[30];
    int chem_marks;
    int phy_marks;
    int maths_marks;
};

void getValues(struct Student *ptr)
{
    printf("Enter the Roll Number\n");
    scanf("%d",&ptr->roll_no);
    printf("Enter the name of the student\n");
    fflush(stdin);
    gets(ptr->name);

    printf("Enter the Chemistry marks\n");
    scanf("%d",&ptr->chem_marks);
    printf("Enter the Physics marks\n");
    scanf("%d",&ptr->phy_marks);
    printf("Enter the Chemistry marks\n");
    scanf("%d",&ptr->maths_marks);
}

int percen(struct Student s)
{
    int sum;

    sum = s.chem_marks+s.phy_marks+s.maths_marks;

    sum = sum /3;

    return sum;
}

int main()
{
    struct Student s[5];
    int i;

    for(i=0;i<5;i++)
    {
        getValues(&s[i]);
    }

    for(i=0;i<5;i++)
    {
        printf("Name: %s    Percentage : %d%%\n",(s+i)->name,percen(s[i]));
    }
 
    return 0;
}