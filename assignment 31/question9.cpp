#include<iostream>
using namespace std;

class Student{
public:
    int id;
    string name;

    void setstudent()
    {
        cout<<"----------------\n"<<endl;
        cout<<"Enter the Student ID   : ";
        cin>>id;
        cout<<"\nEnter the student name : ";
        cin.ignore();
        getline(cin,name);
    }
};

class StudentExam : public Student{
public:
    int s1,s2,s3,s4,s5,s6;
    void setMarks()
    {
        cout<<"\nEnter the marks fo S1 : ";
        cin>>s1;
        cout<<"\nEnter the marks fo S2 : ";
        cin>>s2;
        cout<<"\nEnter the marks fo S3 : ";
        cin>>s3;
        cout<<"\nEnter the marks fo S4 : ";
        cin>>s4;
        cout<<"\nEnter the marks fo S5 : ";
        cin>>s5;
        cout<<"\nEnter the marks fo S6 : ";
        cin>>s6;

    }
};

class studentResult: public StudentExam{
public:
    float result;

    void calculate()
    {
        result = float(s1+s2+s3+s4+s5+s6)/6;
    }

    void setDetail()
    {
        setstudent();
        setMarks();
        calculate();
    }

    void showDetail()
    {
        cout<<"\n\n-------------Student Marksheet--------\n";
        cout<<"Student ID      : "<<id<<endl;
        cout<<"Student Name    : "<<name<<endl;
        cout<<"Subject 1 Marks : "<<s1<<endl;
        cout<<"Subject 2 Marks : "<<s2<<endl;
        cout<<"Subject 3 Marks : "<<s3<<endl;
        cout<<"Subject 4 Marks : "<<s4<<endl;
        cout<<"Subject 5 Marks : "<<s5<<endl;
        cout<<"Subject 6 Marks : "<<s6<<endl;

        cout<<"\n-------------------------------------------\n"<<endl;
        cout<<"Student Percentage : "<<result<<endl;
    
    }
};

int main()
{
    int n;
    cout<<"Enter the no. of student detail you want to enter"<<endl;
    cin>>n;

    studentResult st[n];

    for(int i=0;i<n;i++)
    {
        cout<<"\n------------"<<endl;
        st[i].setDetail();
    }

    for(int i=0;i<n;i++)
    {
        st[i].showDetail();
    }
    return 0;
}