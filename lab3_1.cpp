#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(void)
{
    int y, c;

    cout << "Введите номер года ";
    cin >> y;

    c = (y / 100);

    if (y % 100 > 0)
    {
        c++;
    }
    cout << "Номер столетия " << c;
}