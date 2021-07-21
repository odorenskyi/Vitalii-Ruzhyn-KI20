#ifndef MODULESRUZHYN_H_INCLUDED
#define MODULESRUZHYN_H_INCLUDED
#include <iostream>
#include <fstream>
#include <wchar.h>
#include <fcntl.h>
#include <clocale>
#include <windows.h>
#include <codecvt>
#include <cctype>
#include <ctime>
#include <math.h>

using namespace std;

string wAR()
{
    string author = {"Ruzhyn Vitaliy. CNTU 2021. (c)"};
    return author;
}

int s_calculation(float x, float y, float z)
{
    const double P = 3.141592653589793;
    float s = log(fabs(sin(z)))+ ((1.0/2.0 * pow(x,2) - sqrt(fabs(pow(y + z, 2) - pow(x,5))))/(10 * P * pow(z,4)));
    s = int(s*100 + 0.5)/100.0;
    return s;
}


string inputGetter()
{

    ifstream input;
    input.open("input.txt", ios_base::in);

    if(!input.is_open())
    {
        cout << "‘айл input.txt не знайдено.";
        return 0;
    }

    string inputText;
    string copys;
    while(input.good())
    {
        getline(input, copys);
        inputText += copys;
        inputText += '\n';
    }
    return inputText;
}

int markerGetter(string inputText)
{
    int length = inputText.length();
    int marker = 0;
    for(int i = 0; i < length; i++)
    {
        if(inputText[i] == L'!')
            marker++;
    }
    return marker;
}

int markerGetter2(string inputText)
{
    int length = inputText.length();
    int marker2 = 0;
    for(int i = 0; i < length; i++)
    {
        if(inputText[i] == L'?')
            marker2++;
    }
    return marker2;
}

string outputGetter()
{
    string inputText = inputGetter();
    int length = inputText.length();
    string outputText;
    for(int i = 0; i < length; i++)
    {
        if(!(inputText[i] == 'а' || inputText[i] == 'о' || inputText[i] == 'у' || inputText[i] == 'е' || inputText[i] == 'и' || inputText[i] == '≥'))
            outputText += inputText[i];
    }
    return outputText;
}

string translitor()
{
    string inputText = inputGetter();
    int length = inputText.length();

    char ua[33] = {'а','б','в','г','і','д','е','Ї','ж','з','и','i','њ','й','к','л','м','н','о','п','р','с','т','у','ф','х','ц','ч','ш','щ','ю','€',' '};
    string eng[33] = {"a","b","v","h","g","d","e","ie","zh","z","y","i","i","i","k","l","m","n","o","p","r","s","t","u","f","kh","ts","ch","sh","shch","iu","ia"," "};

    string translitedText;
    for(int i = 0; i < length; i++)
    {
        if(inputText[i] >= 'ј' && inputText[i] <= 'я')
            inputText[i] += 32;
        for(int j = 0; j < 33; j++)
            if(inputText[i] == ua[j])
                translitedText += eng[j];
    }
    return translitedText;
}



string timeNow()
{
    time_t now = time(0);
    char* dt = ctime(&now);
    return dt;
}

string timeConverter()
{
    string times = timeNow();
    string wtime(times.begin(), times.end());
    return wtime;
}
#endif // MODULESRUZHYN_H_INCLUDED
