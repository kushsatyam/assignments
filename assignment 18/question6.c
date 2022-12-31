#include<stdio.h>

int alphaNum(char str[])
{
    int i,num =0 ,alph=0;

    for(i=0;str[i]!='\0';i++)
    {
        if (str[i]>='A' && str[i]<='z')
        {
            alph++;
        }else if (str[i]>='0' && str[i]<='9')
        {
            num++;
        }
    }

    if (alph==0 || num==0)
    {
        return 0;
    }else{
        return 1;
    }
    
}

int main()
{
    char str[30];

    printf("Enter the string \n");
    gets(str);
    
    alphaNum(str) ? printf("Yes, string is alphanumeric") : printf("No, string is not alphanuneric");

    return 0;
}