#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> s = {34,12,0};   // Minheap  set value is -11,0,1,3,5,9,12,34,98,
    s.insert(1);
    s.insert(9);
    s.insert(5);
    s.insert(3);
    s.insert(98);
    s.insert(-11);

    set<int>::iterator i;

    int count =0;
    for(i = s.begin(); i!=s.end(); i++)
    {
        cout<<*i<<" ";
        count++;
    }

    cout<<"\nTotal number of element is "<<count;

    return 0;
}