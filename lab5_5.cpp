#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(void)
{
    const int N = 100;
    int x;
    double Value[N];

    double k, b;

    cout << "Введите k: ";
    cin >> k;
    cout << "Введите b: ";
    cin >> b;

    for (x = 1; x <= N; x++)
    {
      Value[x-1] = k*x + b;
    }
    cout << "Значения функции f(x) = " << k << "*x + " << b << " в диапазоне x = 1,2, ... 100\n";

    for (x = 1; x <= N; x++)
    {
        cout << "f(" << x << ") = " << Value[x-1] << ", ";
    }
}