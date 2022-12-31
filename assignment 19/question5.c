#include<stdio.h>

int main()
{
    char str[10][50];
    int i,j,flag;

    printf("Enter the list of Email address\n");
    for(i=0;i<10;i++)
    {
        gets(str[i]);
    }

    printf("\nThe odd email are given below\n\n");

    for(i=0;i<10;i++)
    {
        flag = 1;
        for(j=0;str[i][j]!='\0';j++)
        {
            if (str[i][j]=='@')
            {
                flag=0;
                break;
            }
            
        }

        if (flag==1)
        {
            printf("%s\n",str[i]);
        }
        
    }
    return 0;
}