#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char str[10][20];
    char temp[20];
    int i,j;

    printf("Enter the 10 city name one by one\n");
    for(i=0;i<10;i++)
    {
        gets(str[i]);
    }

    for(i=0;i<9;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if (strcmp(str[i],str[j])>0)
            {
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }

    printf("\n\nAll city name after arrange in sorted array\n\n");
    for(i=0;i<10;i++)
    {
        printf("%s\n",str[i]);
    }
    return 0;
}