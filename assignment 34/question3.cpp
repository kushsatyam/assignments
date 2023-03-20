#include<iostream>
#include<fstream>
#include<cstdlib>

using namespace std;

int main()
{
    ofstream fout;
    string name;

    fout.open("S:/ineuron/assignment 34/a.txt",ios::app);

    if(!fout)
    {
        cout<<"File not exist"<<endl;
    }else{
        
        cout<<"Enter the detail"<<endl;
        fflush(stdin);
        getline(cin,name);

        fout<<name;
    }

    fout.close();    
    return 0;
}