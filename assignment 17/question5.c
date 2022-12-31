#include<stdio.h>
int main()
{
    char str[30];
    int i;

    printf("Enter the string\n");
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        if (str[i] == ' ')
        {
            i++;
            
        }
        
        if (str[i]<90)
        {
            str[i] = str[i]+32;
        }
        
    }

    printf("\n%s",str);
    return 0;
}