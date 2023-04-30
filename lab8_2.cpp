#include <stdio.h>
#include <conio.h>
#include <cmath>

using namespace std;

float f(float xf)
{
    return pow(xf, 3) + 3 * pow(xf, 2) + 6 * xf - 3;
}

float horda(float a, float b)
{
    return a - (f(a) / (f(b) - f(a))) * (b - a);
}

int main(void)
{
    float a, b, e, x, x1, x2;
    printf("\na = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    printf("e (точность) = ");
    scanf("%f", &e);
    if (f(a) * f(b) > 0)
        printf("\nКорней нет\n");
    else
    {
        x1 = a;
        x2 = b;
        while (abs(x2 - x1) > e)
        {
            x = horda(x1, x2);
            if (f(x1) * f(x) > 0)
                x1 = x;
            else
                x2 = x;
        }
        printf("\nКорень уравнения = %f, f(x) =%f", x1, f(x1));
    }
}