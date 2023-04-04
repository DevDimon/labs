#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(void)
{
    const int N = 10;
    int i, j, count = 0, maxi = 0;
    double Value[N], max;

    cout << "Введите число:\n";
    for (i = 0; i < N; i++)
    {
        cout << "Число " << (i + 1) << " -> ";
        cin >> Value[i];
        if (i == 0)
        {
            max = Value[i];
            maxi = 0;
        }
        else
        {
            if (max < Value[i])
            {
                max = Value[i];
                maxi = i;
            }
        }
    }
    for (i = 0; i < N; i++)
    {
        if (Value[i] < 0)
        {
            if (i < maxi)
            {
                count++;
            }
            Value[i] = 0;
        }
    }
    cout << "Максимальный элемент массива равен " << max << " - индекс " << maxi << endl;
    cout << "Количество отрицательных элементов до максимального " << count << endl;
    cout << "Итоговый массив" << endl;
    for (i = 0; i < N; i++)
    {
        cout << Value[i] << "  ";
    }
}
