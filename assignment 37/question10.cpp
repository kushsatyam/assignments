#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    unordered_map<int,string> m;

    int key;
    string value;

    for(int i=0;i<3;i++)
    {
        cout<<"Enter the key"<<endl;
        cin>>key;

        cout<<"Enter the value"<<endl;
        cin>>value;

        m.insert({key,value});
    }

    unordered_map<int,string>::iterator i;

    for(i=m.begin();i!=m.end();i++)
    {
        cout<<i->first<<" "<<i->second<<endl;
    }
    return 0;
}