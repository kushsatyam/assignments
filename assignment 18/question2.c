#include<stdio.h>

void reverse(char str[])
{
    int i,count=0;
    char a;

    for(i=0;str[i]!='\0';i++)
    {
        count++;
    }
    int j = count-1;

    for(i=0;i<count/2;i++,j--)
    {
        a = str[i];
        str[i] = str[j];
        str[j] = a;
    }

}

int main()
{
    char str[30];
    int i;

    printf("Enter the string \n");
    gets(str);

    reverse(str);

    printf("\n%s",str);

    return 0;
}