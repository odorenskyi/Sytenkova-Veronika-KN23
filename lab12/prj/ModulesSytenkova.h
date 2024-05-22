#ifndef MODULESSYTENKOVA_H_INCLUDED
#define MODULESSYTENKOVA_H_INCLUDED

#include <math.h>

using namespace std;

class ClassLab12_S{
private:
    float radius;
    int cabin;

public:
    ClassLab12_S(float radius = 1.0, int cabin = 1) : radius(radius), cabin(cabin) {}

    void set_radius(float r);
    void set_cabin(float c);

    float get_radius() const { return radius; }
    float get_cabin() const { return cabin; }
    float get_area() const { return M_PI * pow(radius, 2); }
};

void ClassLab12_S::set_radius(float r)
{
    if (r >= 1)
    {
        radius = r;
    }
    else
    {
        cout << "����� ������� ����!" << endl;
    }
}

void ClassLab12_S::set_cabin(float c)
{
    if (� >= 1)
    {
         cabin = c;
    }
    else
    {
        cout << "����� ������� ����!" << endl;
    }
}

#endif // MODULESSYTENKOVA_H_INCLUDED
