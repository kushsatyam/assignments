#include<iostream>
using namespace std;

int main()
{
    string mail;
    string str = "gmail.com";

    cout<<"Enter the Gmail ID of the user"<<endl;
    fflush(stdin);
    getline(cin,mail);

    int len = mail.length();
    int flag1=0,flag2=1;

    try
    {
        for(int i=0;i<len;i++)
        {
            if (mail[i]=='@')
            {
                flag1 = 1;
            }
        }

        int j=0;
        for(int i=len-str.length();i<len;i++)
        {
            if (mail[i]!=str[j])
            {
                flag2 = 0; 
            }

            j++;
        }

        if (flag1==0)
        {
            throw mail;
        }else if(flag2 ==0)
        {
            throw false;
        }

        cout<<"This is a valid email address"<<endl;
        
    }
    catch(bool a)
    {
        cout<<"Please enter a valid mail id"<<endl;
    }
    catch(string s)
    {
        cout<<"@ is missing in the mail id"<<endl; 
    }catch(...)
    {
        cout<<"Unexpected error"<<endl;
    }
        
    return 0;
}