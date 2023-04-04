#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(void)
{
    const int N = 10;
    int i, j, count = 0;
    double Value[N], Check[N];

    cout << "Введите число:\n";
    for (i = 0; i < N; i++)
    {
        cout << "Число " << (i + 1) << " -> ";
        cin >> Value[i];
        Check[i] = 0;
    }

    for (i = 0; i < N; i++)
    {
        count = 0;
        if (Check[i] == 0)
        {
            for (j = i + 1; j < N; j++)
            {
                if (Value[i] == Value[j])
                {
                    Check[j] = 1;
                    count++;
                }
            }
            if (count == 0)
            {
                Check[i] = 1;
            }
        }
    }
    
    for (i = 0; i < N; i++)
    {
        if (Check[i] == 0)
        {
            cout << Value[i] << "  ";
        }
    }
}