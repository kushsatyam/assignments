
#include<iostream>
using namespace std;

class Bank{
    int principle;
    int rate;
    int time;
    int SI;
public:
    Bank(int prin, int r, int t)
    {
        principle = prin;
        rate = r;
        time = t;
    }

    int simInt()
    {
        return (principle*rate*time)/100;
    }
};

int main()
{
    int p,r,t;

    cout<<"Enter the principal, rate and the time for how much"<<endl;
    cin>>p>>r>>t;

    Bank b1(p,r,t);

    cout<<"Simple Interest is "<<b1.simInt();
    return 0;
}