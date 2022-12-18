#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(void)
{
    int n;

    cout << "Введите номер месяца ";
    cin >> n;

    switch (n)
    {
    case 1:
        cout << n << " - январь, зима";
        break;
    case 2:
        cout << n << " - февраль, зима";
        break;
    case 3:
        cout << n << " - март, весна";
        break;
    case 4:
        cout << n << " - апрель, весна";
        break;
    case 5:
        cout << n << " - май, весна";
        break;
    case 6:
        cout << n << " - июнь, лето";
        break;
    case 7:
        cout << n << " - июль, лето";
        break;
    case 8:
        cout << n << " - август, лето";
        break;
    case 9:
        cout << n << " - сентябрь, осень";
        break;
    case 10:
        cout << n << " - октябрь, осень";
        break;
    case 11:
        cout << n << " - ноябрь, осень";
        break;
    case 12:
        cout << n << " - декабрь, зима";
        break;
    default:
        cout << "Нет месяца с номером " << n;
    }
}