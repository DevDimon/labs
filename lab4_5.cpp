#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(void)
{
    float y;
    int count = 0;
    bool pos;

    for (int x = 1; x <= 8; x++)
    {
        cout << "Введите число " << x << " из 8 - ";
        cin >> y;

        if (x == 1)
        {
            pos = y > 0;
        }
        else
        {
            if (pos != (y > 0))
            {
                count++;
            }
            pos = y > 0;
        }
    }
    cout << "Количество изменений знака числа " << count;
}