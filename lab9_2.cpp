#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string>

#define MAXN 25
#define EMPTY_STR ""

using namespace std;

struct address
{
    string gorod;
    string ulica;
    string dom;
    string flat;
};

struct noteItem
{
    string surName;
    string yearBorn;
    address adres;
    string place;
};

int main(void)
{
    noteItem notes[MAXN];
    int i = 0, j, imax;
   

    while (i < MAXN)
    {
        cout << "Введите фамилию (enter для завершения)\n";
        getline(cin, notes[i].surName);
        if (notes[i].surName.empty())
        {
            break;
        }
        else
        {
            cout << "Год рождения\n";
            getline(cin, notes[i].yearBorn);
            cout << "Город\n";
            getline(cin, notes[i].adres.gorod);
            cout << "Улица\n";
            getline(cin, notes[i].adres.ulica);
            cout << "Дом\n";
            getline(cin, notes[i].adres.dom);
            cout << "Квартира\n";
            getline(cin, notes[i].adres.flat);
            cout << "Место работы (учёбы)\n";
            getline(cin, notes[i].place); 
            i++;
        }
    }
    cout << "Ввод данных закончен\n";

    int k = i;
    noteItem tmp;
    string max = "{";

    for (i = 0; i < k; i++)
    {
        for (j = i; j < k; j++)
        {
            if (notes[j].surName.compare(max) < 0)
            {
                max = notes[j].surName;
                imax = j;
            }
        }
        tmp = notes[i];
        notes[i] = notes[imax];
        notes[imax] = tmp;
        max = "{";
    }

    for (i = 0; i < k; i++)
    {
        if (notes[i].adres.gorod == "Krasnoyarsk")
        {
             cout << notes[i].surName << "\n";
        }
    }
}