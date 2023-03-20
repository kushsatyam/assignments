#include<iostream>
#include<vector>
#include<stdlib.h>
using namespace std;

class Employee{
public:
    int emp_code;
    string name;
public:
    Employee()
    {}
    Employee(string &n,int eid)
    {
        name = n;
        emp_code = eid;
    }

    virtual void display()
    {
        cout<<"There is an some error"<<endl;
    }
};

class Fulltime: public Employee{
private:
    int daily_rate;
    int no_days;
    int salary;
public:
    Fulltime(string &n,int eid, int dr, int nd):Employee(n,eid)
    {
        daily_rate = dr;
        no_days = nd;

        salary = daily_rate*no_days;
    }

    void display()
    {
        cout<<"Employee Number     : "<<emp_code<<endl;
        cout<<"Employee name       : "<<name<<endl;
        cout<<"Salary              : "<<salary<<endl;
        cout<<"Status              : "<<"Full Time"<<endl;
    }

};

class Parttime: public Employee{
private:
    int hour_rate;
    int work_hour;
    int salary;
public:
    Parttime(string &n,int eid,int hr, int wh):Employee(n,eid)
    {
        hour_rate = hr;
        work_hour = wh;

        salary = hr*wh;
    }

    void display()
    {
        cout<<"Employee Number     : "<<emp_code<<endl;
        cout<<"Employee name       : "<<name<<endl;
        cout<<"Salary              : "<<salary<<endl;
        cout<<"Status              : "<<"Part Time"<<endl;
    }
};

int menu()
{
    int choice;

    cout<<"\n1. Enter a record"<<endl;
    cout<<"2. Display record"<<endl;
    cout<<"3. Search record"<<endl;
    cout<<"4. Quit"<<endl;

    cout<<"\nEnter your choice : ";
    cin>>choice;

    cout<<"\n";

    return choice;
}

int status()
{
    bool a;
    cout<<"Employee type 1 for full time and 0 for part time"<<endl;
    cin>>a;

    if(a == 1)
    {
        return true;
    }else{
        return false;
    }

    return false;
}

int main()
{
    vector <Employee*> e;
    int count = 0;
    string name;

    while(true)
    {
        system("cls");

        switch (menu())
        {
        case 1:
            int emp_no;
            int daily_rate;
            int no_day;
            int hour_rate;
            int work_hour;

            cout<<"Enter the employee name"<<endl;
            cin.ignore();
            getline(cin,name);
            cout<<"Enter the employee number"<<endl;
            cin>>emp_no;
            
            if(status())
            {
                cout<<"Enter the per day rate"<<endl;
                cin>>daily_rate;
                cout<<"Enter the No. of days"<<endl;
                cin>>no_day;
                e.push_back(new Fulltime(name,emp_no,daily_rate,no_day));
            }else{
                cout<<"Enter the per hour rate"<<endl;
                cin>>hour_rate;
                cout<<"Enter the No. of hour you work"<<endl;
                cin>>work_hour;
                e.push_back(new Parttime(name,emp_no,hour_rate,work_hour));
            }
            count++;
            break;

        case 2:
            for(int i=0;i<count;i++)
            {
                cout<<"\n--------------------------\n"<<endl;
                e[i]->display();
                cout<<"\n--------------------------\n"<<endl;
            }

            cin.get();
            break;
        
        case 3:
            int eid,i;

            cout<<"Enter the employee ID"<<endl;
            cin>>eid;
            for(i=0;i<count;i++)
            {
                if(e[i]->emp_code == eid)
                {
                    e[i]->display();
                    break;
                }
            }
            cin.get();
            break;

        case 4:
            exit(0);
            break;

        default:
            cout<<"Please enter the valid choice"<<endl;
            break;
        }
    }

    for(int i=0;i<count;i++)
    {
        delete e[i];
    }
    
    return 0;
}