#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

#define PI 3.14

int main(void)
{
    float R, r, S;

    cout << "Вычисление площади кольца." << std::endl;
    cout << "Введите радиус кольца (см) R => ";
    cin >> R;
    cout << "Введите радиус отверстия (см) r => ";
    cin >> r;

    if (r>R)
    {
        cout<<"Ошибка! Радиус отверстия не может быть больше радиуса кольца.";
    } 
    else 
    {
        S = (PI * pow(R,2)) - (PI * pow(r,2));
        cout << "S = " << S;
    }
}