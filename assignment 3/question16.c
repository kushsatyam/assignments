#include<stdio.h>
int main()
{
    char a;
    printf("Enter a charater\n");
    scanf("%c",&a);

    if (a>='A' && a<='Z')
    {
        printf("It is a Upper case alphabet");
    }else if(a>='a' && a<='z')
    {
        printf("It is a Lower case alphabet");
    }else if (a>='0' && a<='9')
    {
        printf("It is a number");
    }else
    {
        printf("It is a special character");
    }
    
    
    
    return 0;
}