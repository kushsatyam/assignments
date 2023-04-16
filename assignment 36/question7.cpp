#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque <int> d;

    d.push_front(5);
    d.push_front(4);
    d.push_front(3);
    d.push_front(2);
    d.push_front(1);
    d.push_back(6);

    deque<int>::iterator i;

    i = d.end() - 1;

    cout<<"The element is "<<*i<<endl;
    return 0;
}