#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack <int> s;

    s.push(1);
    s.push(5);
    s.push(0);
    s.push(8);

    s.pop();
    cout<<"Top = "<<s.top();
    return 0;
}