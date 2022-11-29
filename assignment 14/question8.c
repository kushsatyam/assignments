#include<stdio.h>
int main()
{
    int a[10];
    int i,min_f,min_s;

    printf("Enter the element of an array \n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }

    min_f = a[0];
    min_s = 10000;

    for(i=0;i<10;i++)
    {
        if (min_f>a[i])
        {
            min_s = min_f;
            min_f = a[i];
        }else if(min_f<a[i] && min_s>a[i])
        {
            min_s = a[i];
        }
    }

    printf("The second minimum element is %d",min_s);

    return 0;
}