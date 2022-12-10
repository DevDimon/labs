#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(void)
{
    float ax, bx, cx, ay, by, cy, P, S, AB, BC, AC, PP;

    cout << "Вершина A" << std::endl;
    cout << "    x = ";
    cin >> ax;
    cout << "    y = ";
    cin >> ay;
    cout << "Вершина B" << std::endl;
    cout << "    x = ";
    cin >> bx;
    cout << "    y = ";
    cin >> by;
    cout << "Вершина C" << std::endl;
    cout << "    x = ";
    cin >> cx;
    cout << "    y = ";
    cin >> cy;

    AB = sqrt(pow(bx - ax, 2) + pow(by - ay, 2));
    cout << "Сторона AB = " << AB << std::endl;
    BC = sqrt(pow(cx - bx, 2) + pow(cy - by, 2));
    cout << "Сторона BC = " << BC << std::endl;
    AC = sqrt(pow(cx - ax, 2) + pow(cy - ay, 2));
    cout << "Сторона AC = " << AC << std::endl;

    P = AB + BC + AC;
    cout << "Периметр = " << P << std::endl;

    PP = P/2;
    S = sqrt(PP*(PP-AB)*(PP-BC)*(PP-AC));
    cout << "Площадь = " << S;
}