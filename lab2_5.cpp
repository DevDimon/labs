#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(void)
{
    float A, B, C, D;

    cout << "Сторона A = ";
    cin >> A;
    cout << "Сторона B = ";
    cin >> B;
    cout << "Сторона C = ";
    cin >> C;
    cout << "Сторона D = ";
    cin >> D;

    if ((A == B && C == D) ||
        (A == C && B == D) ||
        (A == D && B == C))
    {
        cout << "Можно составить параллелограмм";
    }
    else
    {
        cout << "Нельзя составить параллелограмм";
    }
}