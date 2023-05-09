#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string>

#define MAXN 25
#define EMPTY_STR ""

using namespace std;

struct teamItem
{
    string name;
    int win;
    int lose;
    int draw;
    int zab;
    int prop;
};

int main(void)
{
    teamItem teams[2];
    string input;
    int max = 0;

    while (true)
    {
        cout << "Введите название команды (enter для завершения)\n";
        getline(cin, teams[0].name);
        if (teams[0].name.empty())
        {
            break;
        }
        else
        {
            cout << "Побед\n";
            getline(cin, input);
            teams[0].win = stoi(input);
            cout << "Поражений\n";
            getline(cin, input);
            teams[0].lose = stoi(input);
            cout << "Ничьих\n";
            getline(cin, input);
            teams[0].draw = stoi(input);
            cout << "Забитых мячей\n";
            getline(cin, input);
            teams[0].zab = stoi(input);
            cout << "Пропущенных мячей\n";
            getline(cin, input);
            teams[0].prop = stoi(input);

            if (teams[0].prop > max)
            {
                max = teams[0].prop;
                teams[1] = teams[0];
            }
        }
    }
    printf("Результаты команды %s, пропустившей наибольшее количество мячей (%d)\n Побед - %d, Поражений - %d, Ничьих - %d, Забитых мячей - %d",
           teams[1].name.c_str(), teams[1].prop, teams[1].win, teams[1].lose, teams[1].draw, teams[1].zab);
}