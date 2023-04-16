#include<iostream>
#include<map>
using namespace std;

int main()
{
    multimap<int,int> m;
    int key,value;

    for(int i=0;i<3;i++)
    {
        cout<<"Enter the key"<<endl;
        cin>>key;
        cout<<"Enter the value"<<endl;
        cin>>value;

        m.insert({key,value});
    }

    multimap<int,int>::iterator i;

    for(i = m.begin();i!=m.end();i++)
    {
        cout<<i->first<<" "<<i->second<<endl;
    }

    return 0;
}