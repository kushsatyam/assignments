#include<iostream>
using namespace std;

int main()
{
    string username;
    int count=0,dig=0,sym=0;

    cout<<"Enter the username"<<endl;
    fflush(stdin);
    getline(cin,username);


    try
    {
        for(int i=0;username[i]!='\0';i++)
        {
            count++;
            if(username[i]>='0' && username[i]<='9')
            {
                dig++;
            }

            if(username[i]=='@' || username[i]=='!' || username[i]=='#' || username[i]=='$' || username[i]=='%' || username[i]=='&' || username[i]=='*')
            {
                sym++;
            }
        }


        if(count<6)
        {
            throw count;
        }else if(dig==0)
        {
            throw "dig";
        }else if(sym==0)
        {
            throw '@';
        }

        cout<<"Its a valid username"<<endl;
    }
    catch(int count)
    {
        cout<<"Username should be greater then 6 character"<<endl;
    }
    catch(const char *dig)
    {
        cout<<"Username should contain atleast one digit"<<endl;
    }
    catch(char sym)
    {
        cout<<"Username should contain atleast one special symbol"<<endl;
    }
    catch(...)
    {
        cout<<"Unexpected error"<<endl;
    }
    
    return 0;
}