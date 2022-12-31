#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    int i;

    printf("Enter the string\n");
    gets(str);
    
    strrev(str);

    printf("%s",str);
    return 0;
}