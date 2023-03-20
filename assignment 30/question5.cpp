#include<iostream>
using namespace std;

int main()
{
    string mo;
    int count = 0;
    cout<<"Enter a mobile number"<<endl;
    getline(cin,mo);

    try{
        for(int i=0;mo[i]!='\0';i++)
        {
            if(mo[i]>='0' && mo[i]<='9')
            {
                count++;
            }
        }

        if(count!=10)
            throw count;

        cout<<"Its a valid number"<<endl;
    }
    catch(int c)
    {
        cout<<"It is not a valid number"<<endl;
    }
    return 0;
}