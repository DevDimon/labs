#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(void)
{
    int x;
    float s = 0;

    for (x = 1; x <= 10; x++)
    {
        s = s + (1.0 / x);
    }

    cout << "S = " << s;
}