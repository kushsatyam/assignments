#include<stdio.h>

int vowelCount(char *str)
{
    int i,count=0;

    for(i=0;*(str+i)!='\0';i++)
    {
        if (*(str+i)=='a' || *(str+i)=='e' || *(str+i)=='i' || *(str+i)=='o' || *(str+i)=='u' || *(str+i)=='A' || *(str+i)=='E' || *(str+i)=='I' || *(str+i)=='O' || *(str+i)=='U')
        {
            count++;
        }
        
    }

    return count;
}

int main()
{
    char str[30];

    printf("Enter the string\n");
    gets(str);

    printf("Number of vowel is %d",vowelCount(str));
    return 0;
}