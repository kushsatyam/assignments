#include<iostream>
using namespace std;

template<class T,class T1>
class HashTable{
protected:
    T key[100];
    T value[100];
    int lastindex;
public:
    HashTable()
    {
        lastindex = -1;
    }

    void insertValue(T k, T v)
    {
        lastindex++;
        key[lastindex] = k;
        value[lastindex] = v;
    }

    void deletion(T val)
    {
        int temp=-1,flag=1;
        for(int i=0;i<=lastindex;i++)
        {
            if(value[i]==val)
            {
                flag =0;
                temp = i;
            }
        }

        if(flag)
        {
            cout<<"Value are not found in the Hashtable"<<endl;
        }

        if(temp == lastindex)
        {
            lastindex--;
        }else if(temp != -1){
            for(int i=temp;i<lastindex;i++)
            {
                value[i]=value[i+1];
            }

            for(int i=temp;i<lastindex;i++)
            {
                key[i] = key[i+1];
            }

            lastindex--;
        }
    }

    void display()
    {
        cout<<"Key "<<" "<<" value "<<endl;
        for(int i=0;i<=lastindex;i++)
        {
            cout<<key[i]<<"  -->  "<<value[i]<<endl;
        }
    }

};

int main()
{
    HashTable <int,int> hash;

    hash.insertValue(2,5);
    hash.insertValue(3,0);
    hash.insertValue(1,1);
    hash.insertValue(9,8);
    hash.insertValue(5,5);

    hash.display();

    hash.deletion(1);

    hash.display();
    return 0;
}