#include <stdio.h>
#include <conio.h>
#include <cmath>

using namespace std;

float f(float xf)
{
    return 6 * pow(xf, 3) - pow(xf, 2) - 2;
}

float fp(float xf)
{
    return 18 * pow(xf, 2) - 2 * xf;
}

int main(void)
{
    float a, b, e, x;
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
        x = b;
        while (abs(f(x)) > e)
        {
            x = x - f(x) / fp(x);
        }
        printf("\nКорень уравнения = %f, f(x) =%f", x, f(x));
    }
}