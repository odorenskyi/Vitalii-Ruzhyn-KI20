#include <iostream>
#include "ModulesRuzhyn.h"
#include <clocale>
#include <windows.h>
#include <stdio.h>
#include <string>

using namespace std;
void dev_information()
{
SetConsoleCP(1251);
SetConsoleOutputCP(1251);
    cout << ("\n------------------------------------\n"
           "|        Ruzhyn Vitaliy, CNTU         |\n"
           "|        Ðóæèí Â³òàë³é, ÖÍÒÓ        |"
           "\n------ (c) All Rights Reserved -----\n\n");
}

int main()
{
    int  length;
    char input = ' ';
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    dev_information();
    cout << "Ââåäiòü '7' äëÿ âèêëèêó s_calculation.  " << endl;
    cout << "Ââåäiòü '5' äëÿ âèêëèêó ôóíêöi¿ çàäà÷i 9.1.  " << endl;
    cout <<  "Ââåäiòü '4' äëÿ âèêëèêó ôóíêöi¿ çàäà÷i 9.2.  " << endl;
    cout << "Ââåäiòü '3' äëÿ âèêëèêó ôóíêöi¿ çàäà÷i 9.3.  " << endl;
    cout << "Ââåäiòü 't', 'T' àáî 'C' äëÿ âèõîäó ç ïðîãðàìè." << endl;
    while(true){
        cout << "Ââåäiòü êëþ÷: ";
        cin >> input;
        if(input == '7'){
    int x, y, z;
    float S;
    cout << "Ââåäiòü çíà÷åííÿ x: ";
    cin >> x;
            cout << "Ââåäiòü çíà÷åííÿ y: ";
        cin >> y;
    cout << "Ââåäiòü çíà÷åííÿ z: ";
    cin >> z;
    do {

        if (z==0){
            cout << "z íå ïîâèíåí äîðiâíþâàòè íóëþ.Ââåäiòü çíà÷åííÿ z:";
        }
    } while(z==0);
    const double P = 3.141592653589793;
    S = log(abs(sin(z)))+ ((1.0/2.0 * pow(x,2) - sqrt(abs(pow(y + z, 2) - pow(x,5))))/(10 * P * pow(z,4)));
    S = int(S*100 + 0.5)/100.0;
            cout << "\nS = " << S << endl;
        }else if(input == '5'){
              cout << "Ââåäiòü áàë Áîôîðòà( âiä 0 äî 12): ";
              int bofortBal;
              cin >> bofortBal;
                  while (bofortBal > 12 || bofortBal < 0)
                  {
                      cout << "Íå âiðíå çíà÷åííÿ(áàë Áîôîðòà ìàº áóòè âiä 0 äî 12) " << endl;
                      cout << "Ââåäiòü áàë Áîôîðòà(âiä 0 äî 12): ";
                      cin >> bofortBal;
                  }
              bofort_actions(bofortBal);
              cout << endl;
        }else if(input == '4'){
            cout << "\nÂâåäiòü äîâæèíó îáõâàòó ãîëîâè ó ñàíòèìåòðàõ(53-62): ";
            cin >> length;
            do{
                if(length < 53 || length > 62){
                    cout << "Íåêîðåêòíî ââåäåíå çíà÷åííÿ, îáõâàòó ãîëîâè íå ìîæå áóòè áiëüøèì çà 62 òà ìåíøèì çà 53";
                    cout << "\nÂâåäiòü äîâæèíó îáõâàòó ãîëîâè ó ñàíòèìåòðàõ(53-62): ";
                    cin >> length;
                }
            }while (length < 53 || length > 62);
            std::string s = std::to_string(length);
            cout << "\nÐîçìið øîëîìó = " << Helmetsize(s) << endl << endl;
        }else if(input == '3'){
                int n = 0;
                cout << "\nÂâåäiòü öiëå ÷èñëî âiä 0 äî 8999:";
                cin >> n;
            do{
                if(n < 0 || n > 8999){
                    cout << "Íåêîðåêòíî ââåäåíi äàíi, N ìàº áóòè íå áiëüøå íiæ 8999 òà ìåíøèì íiæ 0" << endl;
                    cout << "\nÂâåäiòü öiëå ÷èñëî âiä 0 äî 8999: ";
                    cin >> n;
                }
            }while (n < 0 || n > 8999);
            if((n>>10)&1){
                cout << "Êiëüêiñòü äâiéêîâèõ íóë³â = " << BinD10(n) << endl << endl;
            }else{
                cout << "Êiëüêiñòü äâiéêîâèõ îäèíèöü =" << BinD10(n) << endl << endl;
            }

        }else if(input == 't' || input == 'T' || input == 'C'){
            break;
        }else {
            cout << "Íåâiðíî ââåäåíèé êëþ÷. \a" << endl;
        }
    }
    system("pause");

    return 0;
}
