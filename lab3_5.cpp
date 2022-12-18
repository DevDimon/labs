#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(void)
{
    int ch, v;

    ch = _getch();

    if (ch >= '0' && ch <= '9')
    {
        v = 0;
    }
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        v = 1;
    }
    switch (v)
    {
    case 0:
        cout << "Цифра";
        break;
    case 1:
        cout << "Латинская буква";
        break;
    default:
        cout << "Не цифра и не латинская буква";
    }
}