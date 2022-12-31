#include<stdio.h>

int main()
{
    char str[30];
    char s;

    int i,count=0;

    printf("Enter the string \n");
    gets(str);

    printf("Enter the character\n");
    scanf("%c",&s);

    for(i=0;str[i]!='\0';i++)
    {
        if (str[i]== s)
        {
            count++;
        }
    }

    printf("The occurence of the character is %d",count);
    return 0;
}