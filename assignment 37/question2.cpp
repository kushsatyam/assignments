#include<iostream>
#include<queue>
using namespace std;

int main()
{
    priority_queue<int>  pq;

    pq.push(1);
    pq.push(9);
    pq.push(98);
    pq.push(-1);
    pq.push(9-50);
    pq.push(8);
    pq.push(3);

    cout<<"Size = "<<pq.size()<<endl;

    while (!pq.empty())
    {
        int val = pq.top();

        cout<<val<<" ";
        pq.pop();
    }

    cout<<"\nSize = "<<pq.size()<<endl;


    

    return 0;
}