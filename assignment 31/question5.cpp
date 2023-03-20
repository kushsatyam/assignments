#include<iostream>
using namespace std;

class item{
public:
    int item_no;
    string name;
    int price;

};

class Discounted_Item: public item{
public:
    int discount_perc;
    int discounted_price;

    void setDetail()
    {
        cout<<"Enter the item name"<<endl;
        fflush(stdin);
        getline(cin,name);

        cout<<"Enter the item number"<<endl;
        cin>>item_no;

        cout<<"Enter the price of item"<<endl;
        cin>>price;

        cout<<"Enter the discount percentage"<<endl;
        cin>>discount_perc;
         
        
        discounted_price = price - (price*discount_perc)/100;
    }

    void display()
    {
        cout<<"Item name : "<<name<<endl;
        cout<<"Item no. : "<<item_no<<endl;
        cout<<"Item price : "<<price<<endl;
        cout<<"Discount percentage : "<<discount_perc<<endl;
        cout<<"Discounted Price : "<<discounted_price<<endl;
    }

    int getprice()
    {
        cout<<price;
        return price;
    }

    int getdiscount()
    {
        return price - discounted_price;
    }
};

int main()
{
    int n;
    cout<<"How many item you want to enter"<<endl;
    cin>>n;

    Discounted_Item d[n];

    cout<<"\n\n----------------------------\n\n";
    for(int i=0;i<n;i++)
    {
        d[i].setDetail();
        cout<<"\n";
    }

    cout<<"\n\n---------------------------\n\n";
    for(int i=0;i<n;i++)
    {
        d[i].display();
        cout<<"\n";
    }

    cout<<"\n---------------------------\n";

    int sum_price=0;
    int sum_discount=0;
    for(int i=0;i<n;i++)
    {
        sum_price += d[i].getprice();
        sum_discount+= d[i].getdiscount();
    }

    cout<<"Total Price : "<<sum_price<<endl;
    cout<<"Total Discount : "<<sum_discount<<endl;

    return 0;
}