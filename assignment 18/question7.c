#include<stdio.h>
#include<string.h>


void palin(char str[], int count)
{
    int i,j=count-1,n=0;

    for(i=0;i<count/2;i++,j--)
    {
        if (str[i]!=str[j])
        {
            n++;
        }
    }

    if (n==0)
    {
        printf("palindrome");
    }else{
        printf("Not palindrome");
    }
    

}

int main()
{
    char str[30];
    int count;
    printf("Enter the string \n");
    gets(str);

    count = strlen(str);

    palin(str,count);
    return 0;
}