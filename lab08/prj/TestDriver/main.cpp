#include <iostream>
#include <math.h>
#include "ModulesRuzhyn.h"
#include<stdio.h>

using namespace std;

int main()
{
    float x[] = {1, 12.75, 1, 1, 1, -1, 111, -5, 5, 13};
    float y[] = {2, 78, 35, 3, 1,  1, 222, -6, 5, 5};
    float z[] = {3, 95, 75, 2, 1, -1, -333, 7, 2, 4};
    float res[] = {-1.95,-0.37,-0.94,-0.09,-0.2,-0.18,-4.72,-0.41,-0.17,-0.33};
    for(int i = 0; i < 10; i++){
            if(s_calculation(x[i], y[i], z[i]) == res[i]){
            cout << "Test case#" << i+1 << " passed  " <<  endl;
        }
        else{
            cout << "Test case#" << i+1 << " failed  " << res << endl;
        }
    }
    getchar();
    return 0;
}
