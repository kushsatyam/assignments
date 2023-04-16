#include<iostream>
#include<forward_list>
using namespace std;

int main()
{
    forward_list <int> li;

    li.assign({1,2,3,4,5});

    forward_list<int>::iterator i;

    for(i=li.begin();i!=li.end();i++)
    {
        cout<<*i<<" ";
    }

    cout<<"\n";

    li.pop_front();
    li.push_front(11);

    for(i=li.begin();i!=li.end();i++)
    {
        cout<<*i<<" ";
    }


    return 0;
}