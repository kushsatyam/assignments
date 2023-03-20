#include<iostream>
using namespace std;

class proof{
protected:
    int a,b,c;
public:
    void setSides()
    {
        cout<<"Enter the three sides of triangle"<<endl;
        cin>>a>>b>>c;
    }
};

class compute: public proof{
public:
    compute()
    {
        setSides();
    }

    bool check()
    {
        if((a*a)==(b*b)+(c*c))
        {
            return true;
        }else if((b*b)==(a*a)+(c*c))
        {
            return true;
        }else if((c*c)==(a*a)+(b*b))
        {
            return true;
        }else{
            return false;
        }
    }
};

int main()
{
    compute t;

    if(t.check())
    {
        cout<<"This are the sides of right angle triangle"<<endl;
    }else{
        cout<<"This are not the sides of right angle triangle"<<endl;
    }
    return 0;
}