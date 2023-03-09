#include<iostream>
#include<cstring>
using namespace std;

class Mystring{
private:
    char str[100];
    int len;
public:
    friend void operator>>(istream &cin, Mystring &s)
    {
        cin>>s.str;

        s.len = strlen(s.str);
    }

    friend Mystring operator!(Mystring s)
    {
        for(int i=0;i<s.len;i++)
        {
            if(s.str[i]>='a' && s.str[i]<='z')
            {
                s.str[i] = s.str[i] - 32;
            }else{
                s.str[i] = s.str[i] + 32;
            }
        }

        return s;
    }

    friend void operator<<(ostream &cout,Mystring s)
    {
        cout<<s.str;
    }
};

int main()
{
    Mystring s;

    cout<<"Enter the string"<<endl;
    cin>>s;

    s = !s;

    cout<<"\n String is : ";
    cout<<s;
    return 0;
}