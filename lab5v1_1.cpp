#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(void)
{
    const int N = 50;
    int x;
    double Value[N];

    double b;

    cout << "Введите b: ";
    cin >> b;

    for (x = 1; x <= N; x++)
    {
      Value[x-1] = 1.0/x + b;
    }
    cout << "Значения функции f(x) = 1/x + " << b << " в диапазоне x = 1,2, ... 50\n";

    for (x = 1; x <= N; x++)
    {
        cout << "f(" << x << ") = " << Value[x-1] << "  ";
    }
}