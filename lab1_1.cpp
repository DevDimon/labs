#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(void)
{
    int a, b, P;
    float c, S;

    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));
    cout << "c=" << c << std::endl;

    P = a + b + c;
    cout << "P=" << P << std::endl;

    S = (a * b) / 2;
    cout << "S=" << S;

    return 1;
}