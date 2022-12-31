#include<stdio.h>


void wordCount(char str[])
{
    int i,count=0;

    for(i=0;str[i]!='\0';i++)
    {
        if (str[i]==' ')
        {
            count++;
        }
    }

    printf("%d word is present in the string\n",count+1);
}

int main()
{
    char str[30];
    
    printf("Enter the string\n");
    gets(str);

    wordCount(str);
    return 0;
}