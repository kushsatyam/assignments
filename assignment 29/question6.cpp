#include<iostream>
using namespace std;

class Time{
    int hr;
    int min;
public:
    Time(int dur)
    {
        hr = dur/3600;
        min = (dur%3600)/60;
    }

    void display()
    {
        cout<<"Hour = "<<hr<<" : Minute = "<<min;
    }
};

int main()
{
    int duration;
    cout<<"Enter the duration"<<endl;
    cin>>duration;

    Time t1 = duration;

    t1.display();
    return 0;
}