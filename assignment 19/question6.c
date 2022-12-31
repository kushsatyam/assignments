#include<stdio.h>

int isPalindrome(char *ptr)  // There is the need of pointer to point the particular address of that string given below
{
    int i,j,len=0;

    for(i=0;ptr[i]!='\0';i++)
    {
        len++;
    }

    j = len-1;

    for(i=0;i<len/2;i++)
    {
        if (ptr[i]!=ptr[j])
        {
            return 0;
        }
        j--;
    }

    return 1;
}

int main()
{
    char str[5][20];
    int i,j;

    printf("Enter the string one by one\n");
    for(i=0;i<5;i++)
    {
        gets(str[i]);
    }

    printf("\n\nList of palindrome string are given below\n\n");

    for(i=0;i<5;i++)
    {
        if (isPalindrome(str[i])) // here we can pass the base address of that particular string 
        {
            printf("%s\n",*(str+i));
        }
        
    }
    return 0;
}