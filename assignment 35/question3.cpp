#include<iostream>
using namespace std;

template<class t>
t maxi(t a,t b, t c)
{
    return (a>b? a>c?a:c : b>c?b:c);
}

int main()
{
    int x = maxi<int>(2,3,1);
    cout<<x<<endl;
    

    x =int( maxi<float>(10,8,19));
    cout<<x;
    return 0;
}