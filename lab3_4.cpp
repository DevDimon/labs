#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(void)
{
    float a, b, c, d;

    cout << "Введите число a - ";
    cin >> a;
    cout << "Введите число b - ";
    cin >> b;

    c = a + b;
    d = a * b;

    switch (c < d)
    {
    case true:
        cout << "Максимальное значение d = " << d << ", формула d = a*b" << endl;
        cout << "Минимальное значение c = " << c << ", формула c = a+b"; 
        break;
    case false:
        cout << "Максимальное значение c = " << c << ", формула c = a+b"<< endl;
        cout << "Минимальное значение d = " << d << ", формула d = a*b";
        break;
    }
}