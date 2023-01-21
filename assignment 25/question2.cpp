#include<iostream>
using namespace std;

class Time{
    int hours;
    int min;
    int sec;
public:
    Time(int h,int m,int s)
    {
        hours = h;
        min = m;
        sec = s;
    }

    void showTime();
};



void Time::showTime()
{
    cout<<hours<<"hr "<<min<<"min "<<sec<<"sec"<<endl;
}

int main()
{
    int h,m,s;

    cout<<"Enter the hours"<<endl;
    cin>>h;

    cout<<"Enter the minute"<<endl;
    cin>>m;

    cout<<"Enter the second"<<endl;
    cin>>s;

    Time t(h,m,s);

    t.showTime();
    return 0;
}