#include<iostream>
using namespace std;

class Customer{
public:
    string name;
    string phone_no;
    void displayCus()
    {
        cout<<"Customer Detail          : "<<name<<endl;;
        cout<<"Customer Phone number    : "<<phone_no<<endl;
    }
};

class Depositor: public Customer{
public:
    int acc_no;
    int balance;
    void displayDepo()
    {
        cout<<"Customer Account Number  : "<<acc_no<<endl;
        cout<<"Account Balance          : "<<balance<<endl;
    }
};

class Borrower:public Depositor{
public:
    int loan_no;
    int loan_amt;

    void setDetail();
    void display();
};

void Borrower::setDetail()
{
    cout<<"Enter the customer name : ";
    cin.ignore();
    getline(cin,name);
    cout<<"Enter the customer mobile number : ";
    cin.ignore();
    getline(cin,phone_no);
    cout<<"Enter the customer account number : ";
    cin>>acc_no;
    cout<<"Enter the balance : ";
    cin>>balance;
    cout<<"Enter the loan number : ";
    cin>>loan_no;
    cout<<"Enter the loan amount : ";
    cin>>loan_amt;
}

void Borrower::display()
{
    displayCus();
    displayDepo();
    cout<<"---------------------"<<endl;
    cout<<"Loan Number      :"<<loan_no<<endl;
    cout<<"Loan Amount      :"<<loan_amt<<endl;
}

int main()
{
    int n;
    cout<<"Enter number of customer detail you want to print : ";
    cin>>n;

    Borrower b[n];    

    for(int i=0;i<n;i++)
    {
        cout<<"\n--------------------"<<endl;
        b[i].setDetail();
        cout<<"----------------------------"<<endl;
    }

    for(int i=0;i<n;i++)
    {
        cout<<"\n\nCustomer Detail"<<endl;
        cout<<"-----------------------------"<<endl;
        b[i].display();
        cout<<"-----------------------------\n";
    }



    return 0;
}