#include<stdio.h>

void upperCase(char str[])
{
    int i;

    for(i=0;str[i]!='\0';i++)
    {
        if (str[i]<90  && str[i]!=' ')
        {
            str[i] = str[i] + 32;
        }
    }

    printf("\n%s\n",str);
}

int main()
{
    char str[30];

    printf("Enter the string \n");
    gets(str);

    upperCase(str);

    return 0;
}