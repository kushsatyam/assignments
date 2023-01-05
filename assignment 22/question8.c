#include<stdio.h>

int main()
{
    int *ptr;

    {
        int x=5;
        ptr=&x;

        printf("%d",*ptr);
    }

    // now ptr is danggling pointer.

    printf("%d",*ptr);

    free(ptr);
    return 0;
}