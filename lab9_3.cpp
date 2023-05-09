#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string>

#define MAXN 25
#define EMPTY_STR ""

using namespace std;

struct vuzItem
{
    string fam;
    string im;
    string ot;
    string pol;
    int age;
    int kurs;
};

int main(void)
{
    vuzItem vuz[MAXN];
    int i = 0, j, imax = 0;
    float max, maleProc;
    string kurs, age;
    int Male[7];
    int All[7];

    for (i = 0; i < 7; i++)
    {
        Male[i] = 0;
        All[i] = 0;
    }

    while (i < MAXN)
    {
        cout << "Введите фамилию (enter для завершения)\n";
        getline(cin, vuz[i].fam);
        if (vuz[i].fam.empty())
        {
            break;
        }
        else
        {
            cout << "Имя\n";
            getline(cin, vuz[i].im);
            cout << "Отчество\n";
            getline(cin, vuz[i].ot);
            cout << "Пол (M/F)\n";
            getline(cin, vuz[i].pol);
            cout << "Возраст\n";
            getline(cin, age);
            vuz[i].age = stoi(age);
            cout << "Курс\n";
            getline(cin, kurs); 
            vuz[i].kurs = stoi(kurs);

            if (vuz[i].pol == "M")
            {
                Male[vuz[i].kurs] = Male[vuz[i].kurs] + 1; 
            }
            All[vuz[i].kurs] = All[vuz[i].kurs] + 1;

            i++;
        }
    }
    cout << "Ввод данных закончен\n";

    max = 0.0;

    for (i = 1; i < 7; i++)
    {
        if(All[i] > 0)
        {
            maleProc = 100 * ((float)Male[i] / All[i]);
            if (maleProc > max)
            {
                max = maleProc;
                imax = i;
            }
        }
    }
    printf("Максимальный процент мужчин (%5.2f %) на %d курсе.", max, imax);
}