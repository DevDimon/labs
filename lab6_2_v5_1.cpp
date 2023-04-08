#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(void)
{
    const int N = 10;
    int i, j, temp, count = 0;
    double Value[N];

    cout << "Введите элементы массива:\n";
    for (i = 0; i < N; i++)
    {
        cout << "Число " << i + 1 << " -> ";
        cin >> Value[i];
    }

    for (int i = 0; i < N - 1; i++)
    {
        for (int j = 0; j < N - i - 1; j++)
        {
            if (Value[j] > Value[j + 1])
            {
                temp = Value[j];
                Value[j] = Value[j + 1];
                Value[j + 1] = temp;
            }
            count++;
        }
    }
    for (int i = 0; i < N; i++)
    {
        cout << Value[i] << " ";
    }
    cout << "Количество сравнений " << count;
}
