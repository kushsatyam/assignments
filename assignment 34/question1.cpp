#include<iostream>
#include<cstdlib>
#include<fstream>
using namespace std;


int main()
{
    ofstream fout;

    fout.open("S:/ineuron/assignment 34/text.txt");
 
    if(fout)
    {
        cout<<"\n\nFile created successfully\n"<<endl;
    }else{
        cout<<"File not created"<<endl;
    }

    fout.close();
    return 0;
}