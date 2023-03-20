#include<iostream>
using namespace std;

int main()
{
    string username;
    int dig=0,len,spe=0;

    cout<<"Enter the username"<<endl;
    fflush(stdin);
    getline(cin,username);

    int upper=0;
    len = username.length();
    try
    {
        for(int i=0;i<username.length();i++)
        {
            if (username[i]=='@' || username[i]=='#' || username[i]=='$' || username[i]=='%' || username[i]=='&' || username[i]=='*')
            {
                spe++;
            }

            if(username[i]>='0' && username[i]<='9')
            {
                dig++;
            }

            if(username[i]>='A' && username[i]<='Z')
            {
                upper++;
            }
            
        }

        if(len<8)
        {
            throw username;
        }else if(dig==0)
        {
            throw false;
        }else if(spe==0)
        {
            throw 2;
        }else if(upper == 0)
        {
            throw 'a';
        }
        
        cout<<"This is valid username"<<endl;
    }
    catch(string s)
    {
        cout<<"Length of username should be greater or equal then 8"<<endl;
    }catch(bool a)
    {
        cout<<"Number is not present in the username"<<endl;
    }catch(char c){
        cout<<"Please enter capital letter also"<<endl;
    }
    catch(int b)
    {
        cout<<"Special character is not  present in the username"<<endl;
    }catch(...)
    {
        cout<<"Unexpected error"<<endl;
    }
    
    return 0;
}