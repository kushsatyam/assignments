#include<iostream>
#include<forward_list>
using namespace std;

int main()
{
    forward_list <int> l1;

    l1.assign({1,2,3,4,5});

    forward_list<int>::iterator i;

    l1.push_front(0);
    l1.push_front(11);
    i = l1.begin();

    cout<<"First element is "<<*i<<endl;
    return 0;
}