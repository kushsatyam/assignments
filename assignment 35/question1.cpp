#include<iostream>
using namespace std;

template<class t1,class t2>
void addition(t1 a,t2 b)
{
    cout<<"a+b = "<<a+b<<endl;
}

int main()
{

    addition<int,int>(2,3);
    addition<float,float>(2,3);
    addition<float,int>(2,3);
    addition<int,float>(2,3);
    return 0;
}