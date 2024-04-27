#include <stdio.h>
#include <math.h>

double s_calculation ( double x, double z)
{
    double S = ((0.5)*(pow(((abs(2*z - pow(x, 2)))/ sin(x)), 3)))/(pow(1+(abs(cos(x))), 0.5) + 2 * 3.1415);
    return S;
}
