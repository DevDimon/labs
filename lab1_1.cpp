#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(void)
{
    int a, b, P, S;
    float c;

    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));
    cout << "c=" << c << "\n";

    P = a + b + c;
    cout << "P=" << P << "\n";

    S = (a * b) / 2;
    cout << "S=" << S;

    return 1;
}