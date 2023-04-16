#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v = {1,2,3,4,5,6,7,8,9};

    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<v[i]<<" ";
    // }

    // for(auto i : v)
    // {
    //     cout<<i<<" ";
    // }

    vector<int>::iterator i;

    for(i = v.begin();i!=v.end();i++)
    {
        cout<<*i<<" ";
    }
    
    return 0;
}