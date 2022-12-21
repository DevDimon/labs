#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(void)
{
    int S;

    cout << "Введите число ";
    cin >> S;

    for (int x = 20; x <= 32; x++)
    {
        if (S % x == 0)
        {
            cout << "Кратное числу S " << x << endl;
        }
    }
}