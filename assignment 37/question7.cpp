#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int,string> m;
    int key;
    string value;

    for(int i=0;i<5;i++)
    {
        cout<<"Enter the key and value for "<<i+1<<" element"<<endl;
        cin>>key;
        cin>>value;

        m.insert({key,value});
    }

    map<int,string>::iterator i;

    for(i = m.begin();i!=m.end();i++)
    {
        cout<<i->first<<" "<<i->second<<endl;
    }
    return 0;
}