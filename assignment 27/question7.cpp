#include<iostream>
using namespace std;


class fraction{
private:
    long numerator;
    long denominator;
public:
    fraction(long n=0,long d=0)
    {
        numerator = n;
        denominator = d;
    }

    void getValue()
    {
        cout<<"Numerator : ";
        cin>>numerator;
        cout<<"Denominator : ";
        cin>>denominator;
    }
    
    void display()
    {
        cout<<numerator<<"/"<<denominator<<endl;
    }

    friend void operator<<(ostream &cout,fraction &f)
    {
        cout<<f.numerator<<"/"<<f.denominator<<endl;
    }

    friend void operator>>(istream &cin, fraction &f)
    {
        cout<<"Numerator : ";
        cin>>f.numerator;
        cout<<"Denominator : ";
        cin>>f.denominator;
    }

    fraction operator++(int);
    fraction operator++();

    void operator=(fraction f)
    {
        numerator = f.numerator;
        denominator = f.denominator;
    } 

};

fraction fraction::operator++(int)
{
    fraction old = *this;
    numerator++;
    denominator++;

    return old;
}

fraction fraction::operator++()
{
    numerator++;
    denominator++;

    return *this;
}


int main()
{
    fraction f1,f2;

    cout<<"f1  : ";
    cout<<f1;

    cout<<"f2  : ";
    cout<<f2;

    cout<<"\n";
    cout<<"\nEnter the 1st fraction"<<endl;
    cin>>f1;

    f1++;
    cout<<"\nf1++  : ";
    cout<<f1;
    ++f1;
    cout<<"\n\n++f1  : ";
    cout<<f1;

    cout<<"\n\nEnter the 2st fraction"<<endl;
    cin>>f2;

    f2 = ++f1;
    cout<<"\n\nf1  :  ";
    cout<<f1;
    cout<<"f2  :  ";
    cout<<f2;

    cout<<"\n";
    f2 = f1++;
    cout<<"f1  :  ";
    cout<<f1;
    cout<<"f2  :  ";
    cout<<f2;

    return 0;
}