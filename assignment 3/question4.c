#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number \n");
    scanf("%d",&n);

    if ((n&1) == 0)         //Relational Operator has more priority to Bitwise operator except right and left shift operator.
        printf("Number is Even");
    else 
        printf("Number is Odd");
    
    return 0;
}