#include<stdio.h>
#include<string.h>

void printReverse(char *str, int len)
{
    strrev(str);
    printf("%s",str);

    // int i;
    // for(i=len-1;i>=0;i--)
    // {
    //     printf("%c",*(str+i));
    // }
}

int main()
{
    char str[30];

    printf("Enter the string\n");
    gets(str);

    int len = strlen(str);

    printReverse(str,len);
    return 0;
}