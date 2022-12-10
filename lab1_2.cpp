#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

#define PI 3.14159265

int main(void)
{
    float A, B, C, ab, bc, ac;

    cout << "Сторона A = ";
    cin >> A;
    cout << "Сторона B = ";
    cin >> B;
    cout << "Угол (в градусах) между сторонами A и B = ";
    cin >> ab;

    // используем теорему косинусов
    
    C = sqrt(pow(A, 2) + pow(B, 2) - 2 * A * B * cos(ab * PI / 180));
    cout << "Сторона C = " << C << std::endl;

    ac = (acos((pow(A, 2) + pow(C, 2) - pow(B, 2)) / (2 * A * C))) * 180 / PI;
    cout << "Угол (в градусах) между сторонами A и C = " << ac << std::endl;

    bc = 180 - (ab + ac);
    cout << "Угол (в градусах) между сторонами B и C = " << bc;
}