#include<iostream>
#include<conio.h>
using namespace std;

class arrayADT{
    int capacity;
    int lastindex;
    int *ptr;
public:
    arrayADT()
    {
        lastindex = -1;
        ptr = NULL;
    }
    void createArray(int cap);
    void viewArray();
    void appendItem(int item);
    void searchItem(int item);
    ~arrayADT()
    {
        delete []ptr;
    }
};

void arrayADT::searchItem(int item)
{
    for(int i=0;i<=lastindex;i++)
    {
        if(ptr[i] == item)
        {
            cout<<"Item found at index "<<i<<endl;
            break;
        }
    }
    getch();
}

void arrayADT::appendItem(int item)
{
    if(capacity == lastindex+1)
    {
        cout<<"Array is already full"<<endl;
        getch();
    }else{
        lastindex++;
        ptr[lastindex] = item;
    }
}

void arrayADT::viewArray()
{
    cout<<"\n\n";
    if(lastindex == -1 || capacity == 0)
    {
        cout<<" ";
    }else{
        for(int i=0;i<=lastindex;i++)
        {
            cout<<ptr[i]<<" ";
        }
    }
    cout<<"\n\n";
}

void arrayADT::createArray(int cap)
{
    capacity = cap;
    lastindex = -1;
    ptr = new int[cap];

    cout<<"\nArray created successfully"<<endl;
}

int viewList()
{
    int choice;

    cout<<"1. Create Array"<<endl;
    cout<<"2. Append Item"<<endl;
    cout<<"3. Search Item"<<endl;
    cout<<"4. Exit"<<endl;

    cout<<"\nEnter your choice"<<endl;
    cin>>choice;

    return choice;
}

int main()
{
    arrayADT a;
    int item,size;

    while (true)
    {
        // system("cls");
        a.viewArray();

        switch (viewList())
        {
        case 1:
            cout<<"Enter the capacity of the array"<<endl;
            cin>>size;
            a.createArray(size);
            break;
        
        case 2:
            cout<<"Enter the item"<<endl;
            cin>>item;
            a.appendItem(item);
            break; 

        case 3:
            cout<<"Enter the item to search"<<endl;
            cin>>item;
            a.searchItem(item);
            break;

        case 4:
            exit(0);
            break;
        default:
            cout<<"Please enter the valid input"<<endl;
            break;
        }
    }
    
    return 0;
}