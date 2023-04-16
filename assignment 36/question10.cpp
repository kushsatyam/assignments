#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue <int> p;

    p.push(1);
    p.push(2);
    p.push(3);
    p.push(4);
    p.push(5);

    while (!p.empty())
    {
        cout<<p.front()<<" ";
        p.pop();
    }
    
    return 0;
}