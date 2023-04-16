#include<iostream>
#include<queue>
using namespace std;

int main()
{
    priority_queue<int> pq;   //default maxheap 5,2,1,0

    pq.push(5);
    pq.push(1);
    pq.push(2);
    pq.push(0);

    while (!pq.empty())
    {
        int val = pq.top();

        cout<<val<<" ";
        pq.pop();
    }
    
    return 0;
}