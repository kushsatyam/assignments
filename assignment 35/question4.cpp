#include<iostream>
using namespace std;

template<class T>

void swa(T &x, T &y)
{
    T temp;

    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a,b;

    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;

    cout<<"Before Swapping : "<<a<<" "<<b<<endl;
    swa<int>(a,b);
    cout<<"After Swapping : "<<a<<" "<<b<<endl;
    return 0;
}