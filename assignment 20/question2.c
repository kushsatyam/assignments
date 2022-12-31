#include<stdio.h>
#include<string.h>

void swap(char *str, char *ptr)
{
    char temp[30];

    strcpy(temp,str);
    strcpy(str,ptr);
    strcpy(ptr, temp);
}

int main()
{
    char str[30];
    char ptr[30];

    printf("Enter the first string \n");
    gets(str);

    printf("Enter the second string \n");
    gets(ptr);

    swap(str,ptr);

    printf("\n%s\n",str);
    printf("%s\n",ptr);

    return 0;
}