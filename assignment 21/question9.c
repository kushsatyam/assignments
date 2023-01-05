#include<stdio.h>
#include<stdlib.h>

struct Student{
    int class;
    char name[39];
};

int main()
{
    int n,i;

    printf("Enter the size you want to print\n");
    scanf("%d",&n);

    struct Student *stu = (struct Student*) calloc(n,sizeof(struct Student));

    for(i=0;i<n;i++)
    {
        printf("Enter the name of %d student\n",i+1);
        fflush(stdin);
        gets((stu+i)->name);

        printf("Enter the class of student\n");
        scanf("%d",&(stu+i)->class);
    }

    for(i=0;i<n;i++)
    {
        printf("\nName : %s     class : %d  \n",(stu+i)->name,(stu+i)->class);
    }

    free(stu);

    return 0;
}