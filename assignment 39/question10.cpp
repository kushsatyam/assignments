#include<iostream>
#include<conio.h>
using namespace std;

class dynamicArray{
    int capacity;
    int lastindex;
    int *ptr;
public:
    dynamicArray()
    {
        capacity = 0;
        lastindex = -1;
        ptr = NULL;
    }

    void viewArray();
    void createArray(int cap);
    void append(int item);
    void doubleArray();
    int size();
    int capa();
    int search(int item);
    void reverse();
    ~dynamicArray()
    {
        delete []ptr;
    }
};

void dynamicArray::reverse()
{
    if(lastindex != -1)
    {
        int j = lastindex;
        for(int i=0;i<=lastindex/2;i++,j--)
        {
            int temp;
            temp = ptr[i];
            ptr[i] = ptr[j];
            ptr[j] = temp; 
        }
    }else{
        cout<<"Array was not created"<<endl;
    }
}

int dynamicArray::search(int item)
{
    if(lastindex == -1)
    {
        return -1;
    }

    for(int i=0;i<=lastindex;i++)
    {
        if(item == ptr[i])
        {
            return i;
        }
    }

    return -1;
}

int dynamicArray::capa()
{
    return capacity;
}

int dynamicArray::size()
{
    return lastindex+1;
}

void dynamicArray::doubleArray()
{
    int *temp;
    temp = new int[capacity*2];

    for(int i=0;i<=lastindex;i++)
    {
        temp[i] = ptr[i];
    }

    capacity = capacity*2;

    delete []ptr;
    ptr = temp;
}

void dynamicArray::append(int item)
{
    if(capacity == 0)         // This statement will execute when dynamic array was not created.
    {
        createArray(1);
    }

    if(lastindex+1 == capacity)
    {
        doubleArray();
    }

    lastindex++;
    ptr[lastindex] = item;
}

void dynamicArray::createArray(int cap)
{
    capacity = cap;
    lastindex = -1;
    ptr = new int[cap];

    cout<<"Array create successfully"<<endl;
    getch();
}

void dynamicArray::viewArray()
{
    cout<<"\n\n";
    if(lastindex==-1)
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

int view()
{
    int choice;

    cout<<"1. Create an array"<<endl;
    cout<<"2. Append an item in the array"<<endl;
    cout<<"3. Size fo the array"<<endl;
    cout<<"4. Capacity of the array"<<endl;
    cout<<"5. Search an item"<<endl;
    cout<<"6. Reverse the array"<<endl;
    cout<<"7. Exit"<<endl;

    cout<<"\nEnter your choice"<<endl;
    cin>>choice;

    return choice;
}

int main()
{
    dynamicArray d;
    int cap,item,a;

    while (true)
    {
        system("cls");

        d.viewArray();

        switch (view())
        {
        case 1:
            cout<<"\nEnter the capacity of the array"<<endl;
            cin>>cap;
            d.createArray(cap);
            break;
        
        case 2:
            cout<<"\nEnter the item to be append"<<endl;
            cin>>item;
            d.append(item);
            break;

        case 3:
            cout<<"\nSize = "<<d.size()<<endl;
            getch();
            break;
        
        case 4:
            cout<<"\nCapacity = "<<d.capa()<<endl;
            getch();
            break;
        
        case 5:
            cout<<"\nEnter the item to be search"<<endl;
            cin>>item;
            a = d.search(item);
            if(a>=0)
            {
                cout<<"Item found at index "<<a<<endl;
                getch();
            }else{
                cout<<"Item not found"<<endl;
                getch();
            }
            break;

        case 6:
            d.reverse();
            break;

        case 7:
            exit(0);
            break;

        default:
            cout<<"\nPlease enter the valid choice"<<endl;
            getch();
            break;
        }
    }
    
    return 0;
}