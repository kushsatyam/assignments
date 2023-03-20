#include<iostream>
using namespace std;

class A{
protected:
int s1,s2,s3;
public:
    void setmarks(int x, int y, int z)
    {
        s1=x; s2 = y; s3 = z;
    }
};

class b:private A{
protected:
    int total;
public:
    void totalMarks()
    {
        total = s1+s2+s3;
    }

    void setValues()
    {
        int a,b,c;
        cout<<"Enter the marks of all subject one by one"<<endl;
        cin>>a>>b>>c;
        setmarks(a,b,c);
    }
};

class c : public b{
    float per;
public:
    void percentage()
    {

        per = (float(total)/3);

        cout<<"Percentage : "<<per<<"%"<<endl;
    }
    
};

int main()
{
    c p;

    p.setValues();
    p.totalMarks();
    p.percentage();

    return 0;
}