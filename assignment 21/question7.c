#include<stdio.h>

struct time{
    int hrs;
    int min;
};

void periodDiff(struct time t1, struct time t2)
{
    struct time d;

    if (t1.hrs > t2.hrs)
    {
        if (t1.min>t2.min)
        {
            d.hrs = t1.hrs - t2.hrs;
            d.min = t1.min - t2.min;
        }else{
            t1.hrs--;
            d.hrs = t1.hrs - t2.hrs;
            d.min = t2.min - t1.min;
        }
    }else{
        if (t2.min>t1.min)
        {
            d.hrs = t2.hrs - t1.hrs;
            d.min = t2.min - t1.min;
        }else{
            t2.hrs--;
            d.hrs = t2.hrs-t1.hrs;
            d.min = t1.min - t2.min;
        }
    }
    
    
    printf("Difference of time period is %d:%d",d.hrs,d.min);
    
}

int main()
{
    struct time t1,t2;

    printf("\nEnter the first time period usng seperator :\n");
    scanf("%d:%d",&t1.hrs,&t1.min);

    printf("\nEnter the second time period usng seperator :\n");
    scanf("%d:%d",&t2.hrs,&t2.min);

    periodDiff(t1,t2);
    return 0;
}