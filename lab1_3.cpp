#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

#define PI 3.14159265

int main(void)
{
    float r, h, V;

    cout << "Радиус = ";
    cin >> r;
    cout << "Высота = ";
    cin >> h;

    V = PI * pow(r, 2) * h;
    cout << "Объём цилиндра = " << V;
}