#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(void)
{
    const int N = 10;
    int i, j, minIndex, count = 0;
    double Value[N], min;

    cout << "Введите элементы массива:\n";
    for (i = 0; i < N; i++)
    {
        cout << "Число " << i + 1 << " -> ";
        cin >> Value[i];
    }
    for (i = 0; i < N/2; i++)
    {
        min = Value[i];
        minIndex = i;

        for (j = i + 1; j < N; j++)
        {
            if (Value[j] <= min)
            {
                min = Value[j];
                minIndex = j;
            }
            count++;
        }

        if (minIndex != i)
        {
            Value[minIndex] = Value[i];
            Value[i] = min;
        }
    }
    for (int i = 0; i < N; i++)
    {
        cout << Value[i] << " ";
    }
    cout << "Количество сравнений " << count;
}