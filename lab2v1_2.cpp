#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(void)
{
    int x, x1, x2, x3;

    cout << "Введите трёхзначное число ";
    cin >> x;

    if (x < 100 || x > 999)
    {
        cout << "Введённое число не трёхзначное";
    }
    else
    {
        x1 = x / 100;
        x2 = (x % 100) / 10;
        x3 = (x % 100) % 10;
        if (x1 != x2 && x1 != x3 && x2 != x3)
        {
            cout << "Все цифры числа различны";
        }
        else
        {
            cout << "В числе есть одинаковые цифры";
        }
    }
}