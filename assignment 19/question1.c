#include<stdio.h>

int main()
{
    char str[5][20];
    int i,j,count=0;

    printf("Enter the five string one by one\n");
    for(i=0;i<5;i++)
    {
        gets(str[i]);
    }

    for(i=0;i<5;i++)
    {
        for(j=0;str[i][j]!='\0';j++)
        {
            if (str[i][j]=='a')
            {
                count++;
            }  
        }
    }


    printf("\nThe frequency of 'a' in all string is %d",count);

    return 0;
}