#include<stdio.h>
int main()
{
    char a;

    printf("Enter a character\n");
    scanf("%c",&a);

    printf("The ASCII code of character %c is %d",a,a);
    return 0;
}