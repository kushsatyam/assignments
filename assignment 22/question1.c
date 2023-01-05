#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i;

    printf("Enter the length of the string \n");
    scanf("%d",&n);

    char *str = (char*) calloc(n,sizeof(char));

    printf("Enter the string\n");
    fflush(stdin);
    gets(str);

    str[n+1] = '\0';

    printf("\n%s\n",str);

    return 0;
}