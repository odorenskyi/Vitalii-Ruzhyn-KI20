#include <iostream>
#include <fstream>
#include <wchar.h>
#include <fcntl.h>
#include <clocale>
#include <windows.h>
#include <codecvt>
#include <cctype>
#include <ctime>
#include <bitset>
#include "ModulesRuzhyn.h"

using namespace std;

int main()
{
    locale();
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "Якщо ви запускаєте застосунок вперше - створiть у тецi с проєктом текстовий файл \"input.txt\", запишiть туди iнформацiю й пiсля цього запустiть застосунок." << endl << endl;

    ifstream startInput;
    startInput.open("input.txt", ios_base::in);
    string inputText = inputGetter();
    startInput.close();

    string outputText = outputGetter();

    ofstream input;
    ofstream output;



    input.open("input.txt", ios_base::out);
    output.open("output.txt", ios_base::out);

    if(!output.is_open())
    {
        cout << "Файл output.txt не знайдено.";
        return 0;
    }

    if(!input.is_open())
    {
        cout << "Файл input.txt не знайдено.";
        return 0;
    }
    float x,y,z;
    int b;
    float res;
    cout << "Уведiть x: ";
    cin >> x;
    cout << "Уведiть y: ";
    cin >> y;
    do {
        cout << "Уведiть z: ";
        cin >> z;
        if (z==0){
            cout << "Число z не може дорiвнювати нулю.";
        }
    } while(z==0);
    const double P = 3.141592653589793;
    res = log(abs(sin(z)))+ ((1.0/2.0 * pow(x,2) - sqrt(abs(pow(y + z, 2) - pow(x,5))))/(10 * P * pow(z,4)));
    res = int (res*100 + 0.5)/100.0;
    cout << "Уведiть число b: ";
    cin >> b;
    while(b <= 1){
        cout << "Уведiть число b: ";
        cin >> b;
    }
    output << wAR() << endl << endl << "Текст з input.txt - " << inputText << "Кiлькiсть знаку оклику - " << markerGetter(inputText) << endl << "Кiлькiсть знаку питання - " << markerGetter2(inputText) << endl << "Речення без голосних: " << outputText << endl << timeConverter();
    input << inputText << endl << "Результат функцiї s_calculation: " <<res << endl << bitset<32>(b) << endl << endl << timeConverter();

}
