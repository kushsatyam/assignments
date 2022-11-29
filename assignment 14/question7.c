#include<stdio.h>

int main()
{
    int a[10];
    int i,max_f=0,max_s=-1;

    printf("Enter the element of an array\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<10;i++)
    {
        if (max_f<a[i])
        {
            max_s = max_f;
            max_f = a[i];
        }else if(max_s<a[i]){
            max_s = a[i];
        }
        
    }

    printf("Second largest element in the array is %d\n",max_s);

    return 0;
}