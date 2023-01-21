#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    
    cout<<"Enter the element of 10 number"<<endl;
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }

    int sum =0;

    for(int i=0;i<10;i++)
    {
        sum = sum + arr[i];
    }

    cout<<"The sum of 10 number is "<<sum;

    return 0;
}