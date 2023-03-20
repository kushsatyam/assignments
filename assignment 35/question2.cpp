#include<iostream>
using namespace std;

template<class t>
t maxi(t a,t b)
{
    return (a>b?a:b);
}

int main()
{
    int x = maxi<int>(2,3);
    cout<<x<<endl;
    

    x =int( maxi<float>(10,8));
    cout<<x;
    return 0;
}