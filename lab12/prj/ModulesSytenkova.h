#ifndef MODULESSYTENKOVA_H_INCLUDED
#define MODULESSYTENKOVA_H_INCLUDED

#include <math.h>

using namespace std;

class ClassLab12_Sytenkova{
private:
    float radius;
    int cabin;

public:
    ClassLab12_Sytenkova(float radius = 1.0, int cabin = 1) : radius(radius), cabin(cabin) {}

    void set_radius(float r);
    void set_cabin(int c);

    float get_radius() const { return radius; }
    float get_cabin() const { return cabin; }
    float get_area() const { return M_PI * pow(radius, 2); }
};

void ClassLab12_Sytenkova::set_radius(float r)
{
    if (r >= 1)
    {
        radius = r;
    }
    else
    {
        cout << "Число занадто мале!" << endl;
    }
}

void ClassLab12_Sytenkova::set_cabin(int c)
{
    if (c >= 1)
    {
         cabin = c;
    }
    else
    {
        cout << "Число занадто мале!" << endl;
    }
}

#endif // MODULESSYTENKOVA_H_INCLUDED
