#include<stdio.h>

int main()
{
    char str[30];
    int alp=0,i,dig=0,sc=0;

    printf("Enter the string\n");
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        if (str[i]>='A' && str[i]<='z')
        {
            alp++;
        }else if(str[i]>='0' && str[i]<='9')
        {
            dig++;
        }else{
            sc++;
        }
    }

    printf("\nAlphabet = %d \nDigit = %d \nSpecial Character = %d",alp,dig,sc);
    return 0;
}