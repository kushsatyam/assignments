#include<iostream>
using namespace std;

class Square
{
    static int count;
    int n;
    int sq;
public:
    Square(int x)
    {
        n=x;
    }

    void squ()
    {
        count++;
        sq = n*n;
    }

    void print()
    {
        cout<<"Count = "<<count;
    }
};

int Square::count =0;

int main()
{
    Square a(5),b(3);

    a.squ();
    b.squ();

    a.print();
    return 0;
}