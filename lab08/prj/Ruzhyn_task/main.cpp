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
    cout << "Ââåäiòü çíà÷åííÿ x: ";
    cin >> x;
    cout << "Ââåäiòü çíà÷åííÿ y: ";
    cin >> y;
    do {
        cout << "Ââåäiòü çíà÷åííÿ z: ";
        cin >> z;
        if (z==0){
            cout << "z íå ïîâèíåí äîðiâíþâàòè íóëþ.Ââåäiòü çíà÷åííÿ z:";
        }
    } while(y==0);
    cout << "Ââåäiòü çíà÷åííÿ a: ";
    cin >> a;
    cout << "Ââåäiòü çíà÷åííÿ b: ";
    cin >> b;
    cout << "a + 1 <= b: " << boolalpha << (a + 1 <= b) << endl;
    cout << "Ó äåñÿòêîâié ñèñòåìi x  = " << dec << x << endl;
    cout << "Ó øiñòíàäöÿòêîâié  ñèñòåìi x = " << hex << x << endl;
    cout << "Ó äåñÿòêîâié ñèñòåìi y = " << dec << y << endl;
    cout << "Ó øiñòíàäöÿòêîâié  ñèñòåìi y = " << hex << y << endl;
    cout << "Ó äåñÿòêîâié ñèñòåìi z = " << dec << z << endl;
    cout << "Ó øiñòíàäöÿòêîâié  ñèñòåìi z = " << hex << z << endl;
    S = s_calculation (x, y, z) ;
    cout << "\n S = " << S << endl;
    system("pause");
    return 0;
}
