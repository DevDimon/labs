#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(void)
{
    int y, c;

    cout << "Введите номер года ";
    cin >> y;

    c = (y / 100) + 1;
    cout << "Номер столетия " << c;
}