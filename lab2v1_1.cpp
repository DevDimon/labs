#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

#define PI 3.14159265

int main(void)
{
    float x, y, z, xz, xy, yz;

    cout << "Сторона x = ";
    cin >> x;
    cout << "Сторона y = ";
    cin >> y;
    cout << "Сторона z = ";
    cin >> z;

    if (x + y <= z || x + z <= y || z + y <= x)
    {
        cout << "Треугольник не существует";
    }
    else
    {
        xz = (acos((pow(x, 2) + pow(z, 2) - pow(y, 2)) / (2 * x * z))) * 180 / PI;
        xy = (acos((pow(x, 2) + pow(y, 2) - pow(z, 2)) / (2 * x * y))) * 180 / PI;
        yz = 180 - xz - xy;

        if (xz > 90 || xy > 90 || yz > 90)
        {
            cout << "Треугольник является тупоугольным";
            
        } else if (xz == 90 || xy == 90 || yz == 90)
        {
            cout << "Треугольник является прямоугольным" << std::endl;
        } else if (xz < 90 || xy < 90 || yz < 90)
        {
            cout << "Треугольник является остроугольным";
        }
    }
}