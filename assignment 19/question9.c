#include<stdio.h>
#include<string.h>

void calFact()
{
    int n,i,fact=1;

    printf("\nEnter the number whose factorial you want to print\n");
    scanf("%d",&n);

    for(i=n;i>0;i--)
    {
        fact = fact*i;
    }

    printf("\n\nThe factorial of the number is %d\n\n",fact);
}

int main()
{
    char str[][30] = {
        "Satyam Kushwaha",
        "honey singh",
        "rustam singh",
        "sanjeev kushwaha",
        "alok kushwaha"
    };
    char name[30];
    int i,flag=0;

    printf("Enter your name\n");
    gets(name);

    for(i=0;i<5;i++)
    {
        if (strcmp(str[i],name)==0)
        {
            flag++;
            calFact();
        }
    }

    if (flag==0)
    {
        printf("\n\nError  :  Name is not present in the list\n\n");
    }
    
    return 0;
}