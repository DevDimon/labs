#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(void)
{
    const int N = 10;
    int i;
    double Value[N];

    double avgLen = 0; 
    int countLen = 0;

    cout << "Введите рост:\n";
    for (i = 0; i < N; i++)
    {
        cout << "Ученик " << (i+1) << " -> ";
        cin >> Value[i];
        avgLen+=Value[i];
    }

    avgLen = avgLen / N;

    for (i = 0; i < N; i++)
    {
        if (Value[i] > avgLen)
        {
            countLen++;
        }
    }
   cout << "Количество учеников, чей рост превышает средний (" << avgLen << ") равно " << countLen; 
}