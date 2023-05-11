#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string>

using namespace std;

struct uslugItem
{
    string name;
    float price;
    float nds;
    int srok;
};

int main(void)
{
    uslugItem uslugi[2];
    string input;
    int max = 0;

    while (true)
    {
        cout << "Введите название услуги (enter для завершения)\n";
        getline(cin, uslugi[0].name);
        if (uslugi[0].name.empty())
        {
            break;
        }
        else
        {
            cout << "Цена\n";
            getline(cin, input);
            uslugi[0].price = stof(input);
            cout << "НДС\n";
            getline(cin, input);
            uslugi[0].nds = stof(input);
            cout << "Срок выполнения\n";
            getline(cin, input);
            uslugi[0].srok = stoi(input);

            if (uslugi[0].price > max)
            {
                max = uslugi[0].price;
                uslugi[1] = uslugi[0];
            }
        }
    }
    printf("Название самой дорогой услуги - %s, стоимость (%.2f)\n", uslugi[1].name.c_str(), uslugi[1].price);
}