#include<iostream>
using namespace std;

class person{
    string name;
    int age;
public:
    void setname()
    {
        cout<<"Enter the name"<<endl;
        fflush(stdin);
        getline(cin,name);
    }

    void setage()
    {
        cout<<"Enter the age"<<endl;
        cin>>age;
    }

    string getname()
    {
        return name;
    }

    int getage()
    {
        return age;
    }
};

class Employee: public person{
    int empid;
    int salary;
public:
    void setEmpid()
    {
        cout<<"Enter the employee ID"<<endl;
        cin>>empid;
    }

    void setsalary()
    {
        cout<<"Enter the salary"<<endl;
        cin>>salary;
    }

    int getempid()
    {
        return empid;
    }

    int getsalary()
    {
        return salary;
    }

    void display()
    {
        cout<<getname()<<endl;
        cout<<getage()<<endl;
        cout<<getempid()<<endl;
        cout<<getsalary()<<endl;
    }
};

int main()
{
    Employee e;

    e.setname();
    e.setage();
    e.setEmpid();
    e.setsalary();

    e.display();
    return 0;
}