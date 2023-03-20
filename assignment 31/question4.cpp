#include<iostream>
using namespace std;

class Person{
protected:
    string name;
    string address;
    string phone_no;
public:

};

class Employee: public Person{
protected:
    int eno;
    string ename;
public:
};

class Manager: public Employee{
protected:
    string designation;
    string depart_name;
    float salary;
public:
    void setData()
    {
        cout<<"Enter the Employee No. : ";
        cin>>eno;
        cout<<"Enter name : ";
        fflush(stdin);
        getline(cin,ename);
        cout<<"Enter Address : ";
        fflush(stdin);
        getline(cin,address);
        cout<<"Enter phone No. : ";
        fflush(stdin);
        getline(cin,phone_no);
        cout<<"Enter Designation : ";
        fflush(stdin);
        getline(cin,designation);
        cout<<"Enter Department Name : ";
        fflush(stdin);
        getline(cin,depart_name);
        cout<<"Enter Basic Salary : ";
        cin>>salary;
    }

    int getsalary()
    {
        return salary;
    }

    string getName()
    {
        return ename;
    }
};

int main()
{
    int n;
    cout<<"How many managers you want to enter ? : ";
    cin>>n;
    int max=0;
    string max_name;

    Manager m[n];

    for(int i=0;i<n;i++)
    {
        cout<<"\n\nEnter the detail of Manager"<<endl;
        cout<<"----------------------------"<<endl;
        m[i].setData();
    }

    cout<<"\n\nManager with Highest Salary is : ";
    for(int i=0;i<n;i++)
    {
        if (max<m[i].getsalary())
        {
            max = m[i].getsalary();
            max_name = m[i].getName();
        }
        
    }

    cout<<max<<endl;

    cout<<"And, Manager Name is : ";
    cout<<max_name<<"\n\n"<<endl;

    return 0;
}