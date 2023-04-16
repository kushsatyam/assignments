#include<iostream>
#include<set>
using namespace std;

int main()
{
    multiset<int> s;

    s.insert(12);
    s.insert(1);
    s.insert(2);
    s.insert(0);
    s.insert(-11);
    s.insert(-10);
    s.insert(99);

    multiset<int>::iterator i;

    i = s.begin();

    cout<<*i<<endl;
    return 0;
}