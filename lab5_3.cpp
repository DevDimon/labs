#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(void)
{
    const int N = 10;
    int i;
    double Value[N];

    int countPair = 0;
    

    cout << "Введите числа:\n";
    for (i = 0; i < N; i++)
    {
        cout << "Число " << (i+1) << " -> ";
        cin >> Value[i];

        if (i > 0)
        {
            if (Value[i-1] * Value[i] > 0)
            {
                if (abs(Value[i-1])>abs(Value[i]))
                {
                    countPair++;
                }
            }
        }
    }
    cout << "Подходящих пар чисел " << countPair;
}