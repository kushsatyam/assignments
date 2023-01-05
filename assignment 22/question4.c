#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;

    printf("Enter the size of character\n");
    scanf("%d",&n);

    char *str = (char*) calloc(n,sizeof(char));

    str[n+1] = '\0';

    printf("Enter the string \n");
    fflush(stdin);
    gets(str);


    printf("The inputted string are given below\n%s",str);


    free(str);
    return 0;
}
