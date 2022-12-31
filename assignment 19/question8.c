#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int minDistance(char str[][10], char w1[], char w2[])
{
    int ans=9999,i,d1=-1,d2=-1;

    for(i=0;i<5;i++)
    {
        if (strcmp(str[i],w1) == 0)
        {
            d1 =i;
        }

        if (strcmp(str[i],w2) == 0)
        {
            d2 =i;
        }

        if (d1!=-1 && d2!=-1)
        {
            ans = ans < abs(d1-d2) ? ans : abs(d1-d2);
        }
    }
    
    return ans-1;
}

int main()
{
    char str[10][10];
    char w1[10], w2[10];
    int i;

    printf("Enter the five word one by one\n");
    for(i=0;i<5;i++)
    {
        gets(str[i]);
    }

    printf("Enter the word1 and word2 one by one you wants to enter\n");
    gets(w1);
    gets(w2);

    printf("The minimum distance between the word is %d",minDistance(str,w1,w2));

    return 0;
}