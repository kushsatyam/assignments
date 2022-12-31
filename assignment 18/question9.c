#include<stdio.h>
#include<string.h>

int count = 0;

void reverseWord(char str[], char ptr[], int j)
{
    for(int i=j;str[i]!=' ' && str[i]!='\0';i++)
    {
        ptr[count] = str[i];
        count++;
    }
}

void reverse(char str[], int len)
{
    int i,j,k;
    char ptr[30];

    for(i=len-1;i>=0;i--)
    {
        if (str[i] == ' ')
        {
            j = i+1;
            reverseWord(str,ptr,j);
            ptr[count] = ' ';
            count++;
        }
        
    }

    if (i==-1)
    {
        reverseWord(str,ptr,i+1);
        ptr[count] = '\0';
    }
    
    printf("\n%s\n",ptr);
}

int main()
{
    char str[30];

    printf("Enter the string\n");
    gets(str);

    int count = strlen(str);

    reverse(str,count);


    return 0;
}