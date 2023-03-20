#include<iostream>
#include<cmath>
using namespace std;

class Photon{
    double wave_length;
public:

    void setWave()
    {
        cout<<"\nEnter the wavelength"<<endl;
        cin>>wave_length;
    }

    int getWave()
    {
        return wave_length;
    }
};

class calculate_photonEnergy: public Photon{
    double eng;
public:
    void Energy()
    {
        eng = (19.878*pow(10,-26))/getWave();
    }

    void display()
    {
        cout<<"\n\nPhoton Energy : "<<eng<<" Joule"<<endl;
    }
};

int main()
{
    calculate_photonEnergy p;

    p.setWave();
    p.Energy();
    p.display();   

    return 0;
}