#include<iostream>
#include<set>
using namespace std;

int main()
{
    multiset<int> s;

    s.insert(88);
    s.insert(4);
    s.insert(9);
    s.insert(3);
    s.insert(2);
    s.insert(1);
    s.insert(0);

    multiset<int>::reverse_iterator i;

    i = s.rbegin();
    cout<<*i<<" ";

    return 0;
}