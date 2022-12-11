#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(void)
{
    float Ax, Ay, Bx, By, AB;
    cout << "Координаты точки A" << std::endl;
    cout << "    x = ";
    cin >> Ax;
    cout << "    y = ";
    cin >> Ay;
    cout << "Координаты точки B" << std::endl;
    cout << "    x = ";
    cin >> Bx;
    cout << "    y = ";
    cin >> By;
    AB = sqrt(pow(Bx - Ax, 2) + pow(By - Ay, 2));
    cout << "Длина отрезка AB = " << AB;
}