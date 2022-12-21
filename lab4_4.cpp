#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(void)
{
    float y, max, min;

    for (int x = 1; x <= 6; x++)
    {
        cout << "Введите число " << x << " из 6 - ";
        cin >> y;

        if (x == 1)
        {
            max = min = y;
        }
        else
        {
            if (y < min)
            {
                min = y;
            }
            if (y > max)
            {
                max = y;
            }
        }
    }
    cout << "Минимальное число = " << min << endl;
    cout << "Максимальное число = " << max;
}