#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(9);
    v.insert(v.begin(),8);
    v.push_back(7);
    v.push_back(6);
    v.push_back(5);
    v.push_back(4);
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);

    for(auto i:v)
    {
        cout<<i<<" ";
    }

    return 0;
}