#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(void)
{
    const int N = 10;
    int i;
    double Value[N];
    int cPos = 0, cNeg = 0;
    double sumPos = 0.0, mulNeg = 1.0; 

    cout << "Введите элементы массива:\n";
    for (i = 0; i < N; i++)
    {
        cout << "Value[" << i + 1 << "] -> ";
        cin >> Value[i];
    }

    for (i = 0; i < N; i++)
    {
        if (Value[i] > 0)
        {
            cPos++;
            sumPos+=Value[i];
        }
         
         if (Value[i] < 0)
        {
            cNeg++;
            mulNeg*=Value[i];
        }
    }
    cout << "Количество положительных чисел " << cPos << std::endl;
    cout << "Сумма положительных чисел " << sumPos << std::endl;
    cout << "Количество отрицательных чисел " << cNeg << std::endl;
    if (cNeg == 0)
    {
        mulNeg = 0;
    }
    cout << "Произведение отрицательных чисел " << mulNeg;
}
