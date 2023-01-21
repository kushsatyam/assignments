#include<iostream>
using namespace std;

class Date{
    int d ,m,y;
public:
    Date()
    {
        int day,month,year;
        cout<<"Enter the Date by using space as a seperator in the form of DD MM YYYY"<<endl;
        cin>>day>>month>>year;

        d = day;  m = month; y = year;

    }

    void printDate()
    {
        cout<<"Date :- "<<d<<"/"<<m<<"/"<<y;
    }
};

int main()
{
    Date d1;

    d1.printDate();
    return 0;
}