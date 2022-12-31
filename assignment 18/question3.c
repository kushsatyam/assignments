#include<stdio.h>


int compare(char str[], char ptr[])
{
    int i,j;

    for(i=0;str[i]!='\0';i++)
    {
        if (str[i]!=ptr[i])
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    char str[30], ptr[30];

    printf("Enter the first string \n");
    gets(str);

    printf("\nEnter the another string \n");
    gets(ptr);

    compare(str,ptr) ? printf("\nBoth string are same\n") : printf("\nBoth string are different\n");

    return 0;
}