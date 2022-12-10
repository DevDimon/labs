#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(void)
{
    float a, b, c, P, S;

    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));
    cout << "Диагональ = " << c << std::endl;

    P = (a + b) * 2;
    cout << "Периметр = " << P << std::endl;

    S = a * b;
    cout << "Площадь = " << S;
}