#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;

int main()
{
    ifstream fin1,fin2;

    fin1.open("s:/ineuron/assignment 34/text.txt");
    fin2.open("s:/ineuron/assignment 34/a.txt");

    if(!fin1 && !fin2)
    {
        cout<<"Such file or directory are not found"<<endl;
        exit(1);
    }else{
        ofstream fout;
        fout.open("s:/ineuron/assignment 34/merge.txt");

        if(!fout)
        {
            cout<<"Merge file can not created"<<endl;
            exit(1);
        }else{
            string s;
            while (!fin2.eof())
            {
                getline(fin2,s);
                fout<<s;
            }
            
            while (!fin1.eof())
            {
                getline(fin1,s);
                fout<<s;
            }
        }
        fout.close();
        fin1.close();
        fin2.close();
    }

    cout<<"File Merge Successfully"<<endl;

    return 0;
}