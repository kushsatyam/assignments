#include<stdio.h>

int main()
{
    char str[30];
    int i,count=0;

    printf("Enter the string\n");
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='U')
        {
            count++;
        }
        
    }

    printf("Total number of vowel is %d",count);
    return 0;
    
}