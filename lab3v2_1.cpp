#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(void)
{
    int m;

    cout << "Введите номер месяца ";
    cin >> m;

    switch (m)
    {
    case 1:
    case 2:
    case 3:
        cout << "Квартал - 1";
        break;
    case 4:
    case 5:
    case 6:
        cout << "Квартал - 2";
        break;
    case 7:
    case 8:
    case 9:
        cout << "Квартал - 3";
        break;
    case 10:
    case 11:
    case 12:
        cout << "Квартал - 4";
        break;
    default:
        cout << "Нет месяца с номером " << m;
    }
}