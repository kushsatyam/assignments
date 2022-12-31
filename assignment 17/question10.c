#include<stdio.h>

int main()
{
    char str[30];
    int arr[130] = {0};

    printf("Enter the string\n");
    gets(str);


    for(int i=0;str[i]!='\0';i++)
    {
        arr[str[i]]++;
    }

    printf("Frequency fo the character is \n");
    for(int i=0;i<130;i++)
    {
        printf("%c",str[i]);
        if (arr[i]>0)
        {
            printf("%c -->  %d\n",i,arr[i]);
        }
    }
    return 0;
}