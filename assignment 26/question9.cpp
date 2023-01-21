#include<iostream>
using namespace std;

class Bill{
    int meterNo;
    char customer_Name[30];
    int unit;
public:
    void get();
    int calculateBill();
};

void Bill::get()
{
    cout<<"Enter the meter number"<<endl;
    cin>>meterNo;
    cout<<"Enter the name of the customer"<<endl;
    cin>>customer_Name;

    cout<<"Enter the number of unit is used"<<endl;
    cin>>unit;
}

int Bill::calculateBill()
{
    float amount =0;

    if(unit<=100)
    {
        amount = unit*1.20;
        return amount;
    }else if(unit>=100 && unit<=200)
    {
        amount = 100*1.20 + (unit-100)*2;
        return amount;
    }else{
        amount = 100*1.20 + (unit-100)*2 + (unit-200)*3;
        return amount;
    }
}

int main()
{
    Bill b1;
    b1.get();

    cout<<"The bill is "<<b1.calculateBill();
    return 0;
}