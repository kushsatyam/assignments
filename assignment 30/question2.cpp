#include<iostream>
using namespace std;

int main()
{
    int a;

    cout<<"Enter the number"<<endl;
    cin>>a;

    try{
        if(a==-1)
            throw a;
    }catch(int a)
    {
        cout<<"Please enter a valid number"<<endl;
    }
    catch(...)
    {
        cout<<"There is some exception error"<<endl;
    }
    return 0;
}