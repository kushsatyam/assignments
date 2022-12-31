#include<stdio.h>
#include<string.h>

int length(char *str)
{
    int i,count = 0;


    count = strlen(str);
    // for(i=0;*(str+i)!='\0';i++)
    // {
    //     count++;
    // }

    return count;
}

int main()
{
    char str[30];

    printf("Enter the string\n");
    gets(str);

    printf("Length of the string is %d",length(str));
    return 0;
}