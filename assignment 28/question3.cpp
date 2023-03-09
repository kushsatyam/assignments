#include<iostream>
using namespace std;

class arr1{
private:
    int arr[100];
    int size = 100;
public:
    arr1()
    {
        for(int i=0;i<100;i++)
        {
            arr[i] = i+1;
        }
    }

    int operator[](int index)
    {
        if (index>size || index<0)
        {
            cout<<"Index is out of bound"<<endl;
            exit(0);
        }
        
        return arr[index];
    }
};

int  main()
{
    arr1 a;

    cout<<a[101];  // only valid index can be used only.
    return 0;
}