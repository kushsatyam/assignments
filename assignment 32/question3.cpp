#include<iostream>
using namespace std;

class Animal{
private:
public:
    void sound()            // This is Function Overriding
    {
        cout<<"Animal Sound"<<endl;
    }
};

class Dog: public Animal{
public:
    void sound()            // This is function overriding.
    {
        cout<<"Dog Sound"<<endl;
    }
};

int main()
{
    Animal a;
    Dog d;
    a.sound();
    d.sound();
    return 0;
}