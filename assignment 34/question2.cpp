#include<iostream>
#include<cstdlib>
#include<fstream>
using namespace std;

int main()
{
    ofstream fout;
    ifstream fin;
    string name;

    fout.open("S:/ineuron/assignment 34/text.txt",ios::out);

    if(!fout)
    {
        cout<<"File can not created"<<endl;
    }else{
        cout<<"Enter the name"<<endl;

        //cin.get();  If we print Satyam Kushwaha they only enter the atyam kushwaha in the file.

        fflush(stdin);
        getline(cin,name);
        fout<<name;
    }

    fout.close();

    fin.open("S:/ineuron/assignment 34/text.txt");

    if(!fin)
    {
        cout<<"File not open"<<endl;
    }else{
        while (!fin.eof())
        {
            getline(fin,name);
            cout<<name;
        }       
    }

    fin.close();

    return 0;
}