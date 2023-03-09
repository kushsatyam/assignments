#include<iostream>
using namespace std;

class student{
private:
    string name;
    int value;
public:
    student(string n,int v)
    {
        name = n;
        value =v;
    }

    void display()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Value : "<<value;
    }

  
};

void operator delete(void *q)
{
    free(q);
}

void* operator new(size_t size)
{
    void *p = malloc(size);

    return p;
}

int main()
{
    student *p = new student("kushwha",15);

    p->display();

    delete p;
    return 0;
}