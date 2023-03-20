#include<iostream>
using namespace std;

class worker{
public:
    int code;
    string name;
    float salary;

};

class officer{
public:
    float DA,HRA;

};

class manager:public worker,public officer{
public:
    float TA,gross_salary;

    void setDetail()
    {
        cout<<"\n------------------\n";
        cout<<"Enter Code : ";
        cin>>code;
        cout<<"\nEnter name : ";
        cin.ignore();
        getline(cin,name);
        cout<<"\nEnter the salary : ";
        cin>>salary;
        cout<<"\nEnter DA     : ";
        cin>>DA;
        cout<<"\nEnter HRA    : ";
        cin>>HRA;

        TA = salary/10;
        gross_salary = salary+DA+TA+HRA;
    }

    void showDetail()
    {
        cout<<"\n\n------------------------\n";
        cout<<"Manager Information"<<endl;
        cout<<"------------------------\n";
        cout<<"Code         : "<<code<<endl;
        cout<<"Name         : "<<name<<endl;
        cout<<"Salary       : "<<salary<<endl;
        cout<<"DA           : "<<DA<<endl;
        cout<<"HRA          : "<<HRA<<endl;
        cout<<"TA           : "<<TA<<endl;
        cout<<"Gross Salary : "<<gross_salary;
    }

};

int main()
{
    int n;
    cout<<"Enter the mnager count"<<endl;
    cin>>n;

    manager m[n];

    for(int i=0;i<n;i++)
    {
        cout<<"Enter the detail for manager count "<<i+1<<endl;
        m[i].setDetail();
    }

    for(int i=0;i<n;i++)
    {
        m[i].showDetail();
    }
    return 0;
}