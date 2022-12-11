#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(void)
{
    float A, R, Diam, diag;

    cout << "Сторона квадрата = ";
    cin >> A;
    cout << "Радиус окружности = ";
    cin >> R;

    Diam = 2 * R;
    diag = sqrt(2 * pow(A, 2));

    if (diag < Diam)
    {
        cout << "Квадрат помещается в окружность";
    }
    else if (diag == Diam)
    {
        cout << "Квадрат вписан в окружность";
    }
    else
    {
        cout << "Квадрат не помещается в окружность" << std::endl;
        if (Diam < A)
        {
            cout << "Окружность помещается в квадрат";
        }
        else if (Diam == A)
        {
            cout << "Окружность вписана в квадрат";
        }
        else
        {
            cout << "Окружность не помещается в квадрат";
        }
    }
}