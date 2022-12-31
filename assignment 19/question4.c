#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char str[10][20];
    int i;
    char temp[20];

    printf("Enter the string one by one\n");
    for(i=0;i<10;i++)
    {
        gets(str[i]);
    }

    printf("\nEnter the string you want to find in rhe list\n");
    gets(temp);


    for(i=0;i<10;i++)
    {
        if (strcmp(temp,str[i])==0)
        {
            printf("The string found at %d number",i+1);
            break;
        }
        
    }
    return 0;
}