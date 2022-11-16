#include<stdio.h>

int main()
{
    char a;
    printf("Enter a charater\n");
    scanf("%c",&a);

    if(a>'a' && a<'z')
    {
        printf("\nLowercase character");
    }else if(a>'A' && a<'Z'){
        printf("\nUppercase character");
    }else{
        printf("\nPlease enter a valid character");
    }
    return 0;
}