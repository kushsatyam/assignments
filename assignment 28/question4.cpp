#include<iostream>
using namespace std;

class student{
private:
    string name;
    int value;
public:
    student(string name, int value)
    {
        this->name = name;
        this->value = value;
    }

    void display()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Value : "<<value;
    }

    void* operator new(size_t size)
    {

        cout<<"New operator call"<<endl;
        void *p = malloc(size);
        return p;
    }

    void operator delete(void *q)
    {
        cout<<"\n\ndelete operator call"<<endl;
        free(q);
    }
};

int main()
{
    student *p = new student("Satyam",14);

    p->display();
    
    delete p;
    return 0;
}