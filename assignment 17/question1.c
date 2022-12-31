#include<stdio.h>

int main()
{
    char str[30];
    int i,count=0;

    printf("Enter the string \n");
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        count++;
    }

    printf("The length of the string is %d",count);
    return 0;
}
