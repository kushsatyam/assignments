#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<string,int> m;
    string key;
    int value;

    for(int i=0;i<5;i++)
    {
        cout<<"Enter the key and value for "<<i+1<<" element"<<endl;
        cin>>key;
        cin>>value;

        m.insert({key,value});
    }

    map<string,int>::iterator i;

    for(i = m.begin();i!=m.end();i++)
    {
        cout<<i->first<<" "<<i->second<<endl;
    }
    return 0;
}