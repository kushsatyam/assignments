#include<iostream>
using namespace std;

class Student{
    int roll_no;
    char name[30];
    int marks;
public:
    Student();

    void showDetail();
};

Student::Student()
{

    cout<<"Enter the Roll Number of the student"<<endl;
    cin>>roll_no;
    cout<<"Enter the name of the student"<<endl;
    cin>>name;
    cout<<"Enter the marks of the student"<<endl;
    cin>>marks;
}

void Student::showDetail()
{
    cout<<"Roll Number :"<<roll_no<<endl;
    cout<<"Name : "<<name<<endl;
    cout<<"Marks : "<<marks<<endl;
}

int main()
{
    Student s1,s2;

    s1.showDetail();
    cout<<endl;
    s2.showDetail();
    return 0;
}