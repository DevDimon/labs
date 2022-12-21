#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(void)
{
    int x;

    for (x = 1; x <= 10; x++)
    {
        cout << "Квадрат числа " << x << " равен " << pow(x,2) << endl;
    }
}