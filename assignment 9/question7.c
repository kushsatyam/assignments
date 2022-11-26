#include<stdio.h>
int main()
{
    // program shows warning < warning : swtich condition has boolean value >

    int unit;
    float bill;

    printf("Enter the electricity unit\n");
    scanf("%d",&unit);

    switch (unit<50)
    {
    case 1:
        bill = unit*0.50;
        bill = (bill*6)/5;    // 2.  we multiply bill with 6/5 because we have to increment bill by 20% means mu7ltiply the number by 6/5.
        printf("Bill Amount : %.2fRs\n",bill);
        break;
    case 0:
        switch (unit<150)
        {
        case 1:
            bill = 50*0.50+(unit-50)*0.75;
            bill = (bill*6)/5;
            printf("Bill Amount: %.2fRs\n",bill);
            break;
        case 0:
            switch (unit<250)
            {
            case 1:
                bill = 50*0.50+100*0.75+(unit-150)*1.20;
                bill = (bill*6)/5;
                printf("Bill Amount: %.2fRs",bill);
                break;
            case 0:
                switch (unit>250)
                {
                case 1:
                    bill= 50*0.50+100*0.75+100*1.20+(unit-250)*1.50;
                    bill = (bill*6)/5;
                    printf("Bill Amount: %.2fRs",bill);
                    break;
                
                default:
                printf("!------Error------!");
                    break;
                }
                break;
            default:
                printf("!------Error------!");
                break;
            }
            break;
        default:
            printf("!------Error------!");
            break;
        }
        break;
    default:
        printf("!------Error------!");
        break;
    }
    return 0;
}