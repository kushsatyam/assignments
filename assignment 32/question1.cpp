#include<iostream>
using namespace std;

class FLOAT{
private:
    float val;
public:
    FLOAT()
    {}

    FLOAT(float x)
    {
        val = x;
    }

    FLOAT operator+(FLOAT f)
    {
        FLOAT temp;
        temp.val = val + f.val;
        return temp;
    }

    FLOAT operator*(FLOAT f)
    {
        FLOAT temp;
        temp.val = val * f.val;
        return temp;
    }

    FLOAT operator/(FLOAT f)
    {
        FLOAT temp;
        temp.val = val / f.val;
        return temp;
    }

    FLOAT operator-(FLOAT f)
    {
        FLOAT temp;
        temp.val = val - f.val;
        return temp;
    }

    void display()
    {
        cout<<"\nValue : "<<val<<endl;
    }
};

int main()
{
    FLOAT f1(5),f2(3),f3;

    f3 = f1 + f2;
    f3.display();
    f3 = f1*f2;
    f3.display();
    f3 = f1/f2;
    f3.display();
    f3 = f1-f2;
    f3.display();
    return 0;
}