#include<iostream>
using namespace std;

int main()
{
    char pass[10];

    cout<<"Enter the password"<<endl;
    cin.getline(pass,10);

    

    int dig=0,spe=0,count=0,Cap=0;
    try
    {
        for(int i=0;pass[i]!='\0';i++)
        {
            count++;
            if (pass[i]>='0' && pass[i]<='9')
            {
                dig++;
            }
            if(pass[i]=='@' || pass[i]=='#' || pass[i]=='$' || pass[i]=='%' || pass[i]=='&' || pass[i]=='*')
            {
                spe++;
            }
            if(pass[i]>='A' && pass[i]<='Z')
            {
                Cap++;
            }
        }

        if(count<6)
        {
            throw count;
        }else if(spe==0)
        {
            throw spe;
            
        }else if(dig==0)
        {
            throw dig;
        }else if(Cap==0)
        {
            throw Cap;
        }

        cout<<"This is a valid password"<<endl;
    }
    catch(int a)
    {
        if(count<6)
        {
            cout<<"String should be greater then 6 character"<<endl;
        }else if(spe==0)
        {
            cout<<"Please include the special character in the password"<<endl;
        }else if(dig==0)
        {
            cout<<"Please include digit as well"<<endl;
        }else if(Cap==0)
        {
            cout<<"Please include the capital letter as well"<<endl;
        }
    }catch(...)
    {
        cout<<"Unexpected Error"<<endl;
    }
    
    return 0;
}