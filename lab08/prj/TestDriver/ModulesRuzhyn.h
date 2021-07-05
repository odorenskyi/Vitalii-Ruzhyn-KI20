#ifndef MODULESRUZHYN_H_INCLUDED
#define MODULESRUZHYN_H_INCLUDED
#include <math.h>
float s_calculation(float x, float y, float z)
{
    const double P = 3.141592653589793;
    float S = log(abs(sin(z)))+ ((1.0/2.0 * pow(x,2) - sqrt(abs(pow(y + z, 2) - pow(x,5))))/(10 * P * pow(z,4)));
    S = int(S*100 + 0.5)/100.0;
    return S;
}

#endif // MODULESRUZHYN_H_INCLUDED
