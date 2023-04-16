#include<iostream>
#include<array>
using namespace std;

int main()
{
    array <int, 10> arr;

    cout<<"Enter the 10 value one by one"<<endl;

    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }

    cout<<arr[9]<<endl;
    cout<<arr.at(8)<<endl;
    cout<<get<7>(arr)<<endl;
    
    return 0;
}