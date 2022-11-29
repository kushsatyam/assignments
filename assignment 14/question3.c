#include<stdio.h>
int main()
{
    int a[10],i,sumo=0,sume=0;

    printf("Enter the element of an array \n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<10;i++)
    {
        if (a[i]%2==0)
        {
            sume = sume+a[i];
        }else{
            sumo = sumo+a[i];
        } 
    }

    printf("\nThe sum of even number and odd number are as follow %d and %d",sume,sumo);
    return 0;
}