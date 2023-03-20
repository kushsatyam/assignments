//In this program we learn two thing one is if we initialise any variable inside a swtich statement so we need to write it within scope otherwise they may throw error or warning because this variable are accessible in another case statement.

//And another one is system("pause") is used to pause the screen at particular instance of time.


#include<iostream>
#include<math.h>
using namespace std;

class Area{
    float area;
public:
    Area(float r)
    {
        area = 3.14*r*r;
    }

    Area(float l,float b)
    {
        area = l*b;
    }

    Area(float x, float y, float z)
    {
        float s = (x+y+z)/2;
        area = s*(s-x)*(s-y)*(s-y);
        area = pow(area,0.5);\
    }

    void display()
    {
        cout<<"\nArea : "<<area<<endl;
    }
};

int menu()
{
    int choice;


    cout<<"\n1. Area of the triangle"<<endl;
    cout<<"2. Area of the rectangle"<<endl;
    cout<<"3. Area of the circle"<<endl;
    cout<<"4. Exit"<<endl;

    cout<<"\nEnter your choice : "<<endl;
    cin>>choice;

    return choice;
}


int main()
{
    while (1)
    {
        system("cls");

        switch (menu())
        {
        case 1:
            {float x,y,z;
            cout<<"\nEnter the all sides of the triagnle"<<endl;
            cin>>x>>y>>z;

            Area p(x,y,z);

            p.display();
            system("pause");
            }
            break;
        
        case 2:
            {float l,b;
            cout<<"\nEnter the length and breaddth of the rectangle"<<endl;
            cin>>l>>b;

            Area q(l,b);
            q.display();
            system("pause");
            }
            break;

        case 3:
            {float r;
            cout<<"\nEnter the radius of the circle"<<endl;
            cin>>r;

            Area s(r);
            s.display();
            system("pause");  // This is used to pause the program at particular line.
            }
            break;

        case 4:
            exit(0);
            break;
        default:
            cout<<"\nPlease enter the valid choice"<<endl;
            break;
        }
    }
    
    
    return 0;
}