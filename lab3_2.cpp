#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(void)
{
    int v;
    float a, b, c;

    cout << "Сторона a = ";
    cin >> a;
    cout << "Сторона b = ";
    cin >> b;
    cout << "Сторона c = ";
    cin >> c;

    if (a + b <= c || a + c <= b || c + b <= a)
    {
        v = 0;
    }
    else
    {
        if (a == b || a == c || b == c)
        {
            v = 2;
        }
        if (a == b && b == c)
        {
            v = 1;
        }
        if (a != b && b != c && c != a)
        {
            v = 3;
        }
    }
    switch (v)
    {
    case 0:
        cout << "Треугольник не существует";
        break;
    case 1:
        cout << "Треугольник равносторонний ";
        break;
    case 2:
        cout << "Треугольник равнобедренный ";
        break;
    case 3:
        cout << "Треугольник разносторонний ";
        break;
    }
}