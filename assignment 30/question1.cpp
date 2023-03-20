#include<iostream>
using namespace std;

int main()
{
    int a,b;

    cout<<"Enter the number"<<endl;
    cin>>a>>b;

    try
    {
        if(b==0)
            throw b;
        if(b==1)
            throw "satyam kushwaha";
    }
    catch(int b)
    {
        cout<<"Denominator can not be zero"<<endl;
    }
    catch(const char *s)
    {
        cout<<"Its an string"<<endl;
    }
    catch(...)
    {
        cout<<"Its an default catch"<<endl;
    }
    
    return 0;
}