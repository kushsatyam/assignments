#include<stdio.h>

int main()
{
    int m,n;
    printf("Enter the number of string you want to enter\n");
    scanf("%d",&m);
    printf("Enter the maximum length of the string \n");
    scanf("%d",&n);
    char str[m][n];  // It is also a pointer which we are say as const pointer This type of pointer can be made by compiler

    int i,j;

    printf("Enter the string one by one\n");

    fflush(stdin);  // here something is already fill in buffer due to which we are use fflush(stdin) funcvtion.
    for(i=0;i<m;i++)
    {
        gets(str[i]);
    }

    printf("\n\nThe all string are given below\n\n");
    for(i=0;i<m;i++)
    {
        printf("%s\n",str[i]);
    }
    return 0;
}