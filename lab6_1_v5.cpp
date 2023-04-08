#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(void)
{
    const int N = 10;
    int i;
    double Value[N]; 

    cout << "Введите элементы массива:\n";
    for (i = 0; i < N; i++)
    {
        cout << "Число " << i+1 << " -> ";
        cin >> Value[i];
    }
}