#include <iostream>
#include "ModulesRuzhyn.h"
#include <clocale>
#include <windows.h>

using namespace std;

int main()
{
SetConsoleCP(1251);
SetConsoleOutputCP(1251);
    cout << "Ruzhyn Vitaliy. CNTU 2021. (c)" << endl;

    int x, y, z;
    float S;
    char a, b;
    cout << "Введiть значення x: ";
    cin >> x;
    cout << "Введiть значення z: ";
    cin >> z;
    do {
        cout << "Введiть значення y: ";
        cin >> y;
        if (y==0){
            cout << "y не повинен дорiвнювати нулю.Введiть значення y:";
        }
    } while(y==0);
    cout << "Введiть значення a: ";
    cin >> a;
    cout << "Введiть значення b: ";
    cin >> b;
    cout << "a + 1 <= b: " << boolalpha << (a + 1 <= b) << endl;
    cout << "У десятковiй системi x  = " << dec << x << endl;
    cout << "У шiстнадцятковiй  системi x = " << hex << x << endl;
    cout << "У десятковiй системi y = " << dec << y << endl;
    cout << "У шiстнадцятковiй  системi y = " << hex << y << endl;
    cout << "У десятковiй системi z = " << dec << z << endl;
    cout << "У шiстнадцятковiй  системi z = " << hex << z << endl;
    S = s_calculation (x, y, z) ;
    cout << "\n S = " << S << endl;
    system("pause");
    return 0;
}
