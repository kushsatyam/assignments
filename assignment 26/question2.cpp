#include<iostream>
using namespace std;

class Time{
    int h,m,s;
public:
    void setTime(int hr,int min,int sec)
    {
        h = hr; m = min; s = sec;
    }

    void showTime()
    {
        cout<<"Time : "<<h<<":"<<m<<":"<<s<<endl;
    }

    void normalize()
    {
        int min,sec;

        sec = s;
        s = s%60;
        m = m + sec/60;
        min = m;
        m = m%60;
        h = h+ min/60;
    }

    Time add(Time t1)
    {
        Time temp;
        temp.h = h+t1.h;
        temp.m = m+t1.m;
        temp.s = s+t1.s;

        return temp;
    }
};

int main()
{
    int h1,m1,s1,h2,m2,s2;

    cout<<"Enter the time 1"<<endl;
    cin>>h1>>m1>>s1;
    cout<<"Enter the time 2"<<endl;
    cin>>h2>>m2>>s2;

    Time t1,t2,t3;

    t1.setTime(h1,m1,s1);
    t2.setTime(h2,m2,s2);

    t1.normalize();
    t2.normalize();

    t3 = t1.add(t2);

    t3.normalize();

    t1.showTime();
    t2.showTime();
    t3.showTime();
    return 0;
}