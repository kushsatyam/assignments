#include<iostream>
using namespace std;

class plyers{
    int plyer_no;
    string name;
    int no_ofmatch;
    int *goal;
public:
    plyers(int s_no, string n_str,int match)
    {
        plyer_no = s_no;
        name = n_str;
        no_ofmatch = match;

        

        goal = new int[no_ofmatch];

        cout<<"\nEnter the number of goal in each match : "<<endl;

        if(goal!=NULL)
        {
            for(int i=0;i<no_ofmatch;i++)
            {
                cin>>*(goal+i);
            }
        }else{
            cout<<"Array Can not created\n"<<endl;
        }

        cout<<"\n1\n";
    }

    void display()
    {
        cout<<"\nPlayer Number : "<<plyer_no<<endl;
        cout<<"Plyer Name : "<<name<<endl;
        cout<<"Number of matches : "<<no_ofmatch<<endl;
        cout<<"Number of goal in each matches : ";
        for(int i=0;i<no_ofmatch;i++)
        {
            cout<<goal[i]<<" ";
        }
    }
};

int main()
{
    int plyerNo;
    string n;
    int noMatch;

    cout<<"Enter the plyer number"<<endl;
    cin>>plyerNo;

    cout<<"\nEnter plyer name"<<endl;
    cin.get();
    getline(cin,n);

    cout<<"\nEnter the number match they play"<<endl;
    cin>>noMatch;
    
    plyers p(plyerNo,n,noMatch);

    p.display();

    return 0;
}