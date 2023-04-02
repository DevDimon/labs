#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(void)
{
    const int N = 10;
    int i, j;
    double Value[N];

    cout << "Введите число:\n";
    for (i = 0; i < N; i++)
    {
        cout << "Число " << (i+1) << " -> ";
        cin >> Value[i];
    }

    for (i = 0; i < N; i++)
    {
        for (j = i+1; j < N; j++)
        {

        }
    }
}