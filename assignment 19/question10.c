#include<stdio.h>
int main()
{
    char passWord[10],userName[30];
    char c;
    int i;

    printf("Enter the User Name\n");
    gets(userName);

    printf("\nEnter the User passowrd\n\n");

    for(i=0;i<8;i++)
    {
        c = getchar();
        passWord[i] = c;
        c='*';
        printf("%c",c); 
    }

    passWord[i] = '\0';

    printf("\n\nThe password id %s",passWord);
    return 0;
}