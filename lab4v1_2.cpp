#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(void)
{
    int A;

    cout << "Введите число A - ";
    cin >> A;

    for (int d = A - 1; d > 0; d--)
    {
        if (A % d == 0)
        {
            cout << "Делитель числа A - " << d << endl;
        }
    }
}