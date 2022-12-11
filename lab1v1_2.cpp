#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(void)
{
    float R, r1, r2, r3;

    cout << "Сопротивление R1 = ";
    cin >> r1;
    cout << "Сопротивление R2 = ";
    cin >> r2;
    cout << "Сопротивление R3 = ";
    cin >> r3;

    R = (r1 * r2 * r3) / (r1 * r2 + r2 * r3 + r1 * r3);
    cout << "Сопротивлени соединения = " << R;
}