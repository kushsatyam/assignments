#include<iostream>
using namespace std;
int main()
{
    int a,b;

    cout<<"Enter the two number"<<endl;
    cin>>a>>b;

    char op;
    cout<<"Enter the operator"<<endl;
    cin>>op;

    switch (op)
    {
    case '+':
        cout<<"Sum is "<<a+b;
        break;

    case '-':
        cout<<"Substraction is "<<(a>b?a-b:b-a);
        break;
    
    case '*':
        cout<<"Multiplication is "<<a*b;
        break;
    
    case '/':
        try{
            if(b==0)
                throw b;

            cout<<"Division is "<<a/b;
        }catch(int b)
        {
            cout<<"Denominator can not be zero"<<endl;
        }
        catch(...)
        {
            cout<<"Unknown Error"<<endl;
        }
        break;
    
    default:
        cout<<"Please enter a valid operator"<<endl;
        break;
    }
    return 0;
}