#include<iostream>
using namespace std;

int main()
{
    string str;
    int flag = 0;

    cout<<"Enter the gmail"<<endl;
    cin.get();
    getline(cin,str);

    try{
        for(int i=0;str[i]!='\0';i++)
        {
            if(str[i]=='@')
            {
                flag = 1;
            }
        }

        if(flag == 0)
            throw flag;
        
        cout<<"It is an valid email address"<<endl;
    }
    catch(int f)
    {
        cout<<"It is not an valid email address"<<endl;
    }
    return 0;
}