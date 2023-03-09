#include<iostream>
using namespace std;

class Time{
private:
    int hr;
    int min;
    int sec;
public:
    friend void operator>>(istream &cin, Time &t); // we are not able to create the object of istream class.
    friend void operator<<(ostream &cout,Time t);
    bool operator==(Time t);
};

bool Time::operator==(Time t) 
{
    if (hr==t.hr && min==t.min && sec== t.sec)
    {
        return true;
    }
    
    return false;
}

void operator<<(ostream &cout, Time t)
{
    cout<<"\n";
    cout<<"Hours: "<<t.hr<<" ";
    cout<<"Minutes: "<<t.min<<" ";
    cout<<"Seconds: "<<t.sec;
    cout<<"\n";
}

void operator>>(istream &cin, Time &t)
{
    cout<<"\n";
    cout<<"Enter Hours : ";
    cin>>t.hr;
    cout<<"Enter Minutes : ";
    cin>>t.min;
    cout<<"Enter Seconds : ";
    cin>>t.sec;
    cout<<"\n";
}

int main()
{
    Time t1,t2;

    cin>>t1;
    cout<<t1;
    cin>>t2;
    cout<<t2;

    if(t1==t2)
    {
        cout<<"\nTimes are same"<<endl;
    }else{
        cout<<"\nTimes are different"<<endl;
    }
    return 0;
}