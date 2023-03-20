#include<iostream>
using namespace std;

int main()
{
    string mo;
    int count = 0;
    cout<<"Enter a pincode number"<<endl;
    getline(cin,mo);

    try{
        for(int i=0;mo[i]!='\0';i++)
        {
            if(mo[i]>='0' && mo[i]<='9')
            {
                count++;
            }
        }

        if(count!=6)
            throw count;

        cout<<"Its a valid pincode"<<endl;
    }
    catch(int c)
    {
        cout<<"It is not a valid pincode"<<endl;
    }
    return 0;
}