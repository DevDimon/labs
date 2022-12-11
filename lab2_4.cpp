#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(void)
{
    float x, y;

    cout << "Координата x = ";
    cin >> x;
    cout << "Координата y = ";
    cin >> y;

    if (x > 0 && y > 0)
    {
        cout << "Точка M(" << x << "," << y << ") находится в квадранте I";
    }

    if (x < 0 && y > 0)
    {
        cout << "Точка M(" << x << "," << y << ") находится в квадранте II";
    }

    if (x < 0 && y < 0)
    {
        cout << "Точка M(" << x << "," << y << ") находится в квадранте III";
    }

    if (x > 0 && y < 0)
    {
        cout << "Точка M(" << x << "," << y << ") находится в квадранте IV";
    }
}