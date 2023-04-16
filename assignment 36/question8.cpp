#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack <int> s;

    int a;
    for(int i=1;i<=5;i++)
    {
        cout<<"Enter the element"<<endl;
        cin>>a;
        s.push(a);
    }

    for(int i=1;i<=5;i++)
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}