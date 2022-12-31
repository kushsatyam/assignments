#include<stdio.h>

int main()
{
    char str[30];
    char ptr[30];
    int i;

    printf("Enter the string\n");
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        ptr[i] = str[i];
    }

    printf("\n%s",ptr);
    return 0;
}