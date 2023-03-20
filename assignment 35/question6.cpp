#include<iostream>
using namespace std;

template<class t>
t sum(t arr[],t n)
{
    t s=0;

    for(int i=0;i<n;i++)
    {
        s += arr[i];
    }

    return s;
}

int main()
{
    int arr[10] ={1,2,3,4,5,6,7,8,9,10};

    cout<<"Sum of Array : "<<sum<int>(arr,10);
    return 0;
}