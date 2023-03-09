#include<iostream>
#include<cstring>
using namespace std;

class Cstring{
private:
    char str[30];
public:
    void getString()
    {
        cout<<"Enter the string"<<endl;
        cin>>str;
    }

    void display()
    {
        cout<<str<<endl;
    }

    Cstring operator+(Cstring s)
    {
        Cstring c;
        strcpy(c.str,str);
        strcat(c.str,s.str);
        return c;
    }

    int operator==(Cstring &s)
    {
        return strcmp(str,s.str);
    }
};

int main()
{
    Cstring str1,str2,str3;

    str1.getString();
    str2.getString();

    str3 = str1 + str2;

    str3.display();

    if (str1==str2)
    {
        cout<<"Not Same"<<endl;
    }else{
        cout<<"Both are same"<<endl;
    }
    
    return 0;
}