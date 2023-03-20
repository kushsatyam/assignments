#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream fin;
    fin.open("S:/ineuron/assignment 34/a.txt");

    if(!fin)
    {
        cout<<"a.txt File not open"<<endl;
        exit(0);
    }else{
        ofstream fout;
        fout.open("s:/ineuron/assignment 34/text.txt");

        if(!fout)
        {
            cout<<"text.txt File not open"<<endl;
            exit(0);
        }else{
            char a;

            while (!fin.eof())   //This fin point to each and every point of an string character.
            {
                a = fin.get();    // They fetch the character form particular location where fin point.

                if(a>='a' && a<='z')
                {
                    a = a-32;
                }else if(a>='A' && a<='Z'){
                    a = a+32;
                }

                if(!fin.eof())
                    fout<<a;
            }
            
            fout.close();
        }
    }

    fin.close();

    cout<<"File Copied Successfully"<<endl;

    return 0;
}