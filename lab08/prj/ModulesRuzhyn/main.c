
#include <cmath>
#include <iostream>
using namespace std;

float s_calculation(float x, float y, float z){
    const float P = 3.141592653589793;
    float S = log(abs(sin(z)))+ ((1.0/2.0 * pow(x,2) - sqrt(abs(pow(y + z, 2) - pow(x,5))))/(10 * P * pow(z,4)));
    return S;
}
