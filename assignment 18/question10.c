#include<stdio.h>
#include<string.h>

void findRepeated(char str[], int len)
{
    int arr[130]={0},i;

    for(i=0;str[i]!='\0';i++)
    {
        if (str[i]==' ')
        {
            i++;
        }
        
        arr[str[i]]++;
    }

    printf("This is the repeated character in the string\n");

    for(i=0;i<130;i++)
    {   
        if (arr[i]>1)
        {
            printf("%c --> %d\n",i,arr[i]);
        }
        
    }
}

int main()
{
    char str[30];

    printf("Enter the string\n");
    gets(str);

    int len = strlen(str);
    findRepeated(str,len);
    return 0;
}