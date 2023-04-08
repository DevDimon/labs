#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(void)
{
    const int N = 10;
    int i, j, temp, count = 0, countIn = 0, insertIndex = 0, k;
    double Value[N], inputValue;

    for (i = 0; i < N; i++)
    {
        Value[i] = 0;
    }

    cout << "Введите элементы массива:\n";
    for (i = 0; i < N; i++)
    {
        cout << "Число " << i + 1 << " -> ";
        cin >> inputValue;
        if (i == 0)
        {
            Value[0] = inputValue;
        }
        for (j = 0; j < countIn; j++)
        {
            if (inputValue < Value[j])
            {
                insertIndex = j;
                for (k = N - 1; k > j; k--)
                {
                    Value[k] = Value[k - 1];
                }
                count++;
                Value[insertIndex] = inputValue;
                break;
            }
            else
            {
                Value[countIn] = inputValue;
            }
            count++;
        }
        countIn++;
    }
    for (int i = 0; i < N; i++)
    {
        cout << Value[i] << " ";
    }
    cout << "Количество сравнений " << count;
}