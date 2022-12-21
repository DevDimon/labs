#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(void)
{
    float y;
    int countP = 0, countN = 0;

    for (int x = 1; x <= 6; x++)
    {
        cout << "Введите число " << x << " из 6 - ";
        cin >> y;

        if (y > 0)
        {
            countP++;
        }

        if (y < 0)
        {
            countN++;   
        }
    }
    cout << "Положительных чисел " << countP << endl;
    cout << "Отрицательных чисел " << countN;
}