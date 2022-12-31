#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int isvalidDigit(char *ptr1)
{
    while (*ptr1)
    {
        if (!isdigit(*ptr1))
        {
            return 0;
        }
        ptr1++;
    }

    return 1;
}

int isvalidNumber(char *str1)
{
    int i, num, dots = 0;
    char *ptr;

    if (str1 == NULL)
    {
        return 0;
    }

    ptr = strtok(str1, ".");
    
    if (ptr == NULL)
    {
        return 0;
    }

    while (ptr)
    {
        if (isvalidDigit(ptr) == 0)
        {
            return 0;
        }

        num = atoi(ptr);

        if (num >= 0 && num <= 255)
        {
            ptr = strtok(NULL, ".");
            if (ptr != NULL)
            {
                dots++;
            }
        }
        else
        {
            return 0;
        }
    }

    if (dots != 3)
    {
        return 0;
    }

    return 1;
}

int main()
{
    char str[5][30] = {
        "192.168.4.1",
        "172.16.253.1",
        "192.800.100.1",
        "125.512.100.abc",
        "1.1.1.1"};
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("%s\n", str[i]);
        isvalidNumber(str[i]) ? printf(" Valid IP address\n") : printf(" Invalid IP address\n");
        printf("%s\n", str[i]);
    }
    return 0;
}