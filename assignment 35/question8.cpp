#include<iostream>
using namespace std;

template<class T>
class Stack1{
protected:
    T arr[100];
    int lastindex;
public:
    Stack1()
    {
        lastindex = -1;
    }

    void push(T x)
    {
        lastindex++;
        arr[lastindex] = x;
    }

    T pop()
    {
        T temp =0 ;
        if(lastindex == -1)
        {
            cout<<"Stack is already Empty"<<endl;
        }else{
            temp = arr[lastindex];
            lastindex--;
        }

        return temp;
    }
};

int main()
{
    Stack1 <int>a;

    a.push(5);
    a.push(6);
    a.push(7);
    a.push(8);
    a.push(9);

    cout<<a.pop()<<" ";
    cout<<a.pop()<<" ";
    cout<<a.pop()<<" ";
    cout<<a.pop()<<" ";
    cout<<a.pop()<<" ";
    return 0;
}
