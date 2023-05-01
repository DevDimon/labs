#include <stdio.h>
#include <conio.h>
#include <cmath>

using namespace std;

float f(float xf)
{
    return pow(xf, 4) + 2 * pow(xf, 3) - xf - 1;
}

int main(void)
{
    float a, b, d, x, v;
    printf("\na = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    printf("d (шаг) = ");
    scanf("%f", &d);
    if (f(a) * f(b) > 0)
    {
        printf("\nКорней нет\n");
    }
    else
    {
        for (x = a; x <= b; x = x + d)
        {
            printf("\n x = %f f(x) = %f", x, f(x));
            if (f(a) * f(x) < 0)
            {
                v = (x + (x - d)) / 2;
                printf("\nКорень уравнения = %f, f(x) =%f", v, f(v));
                break;
            }
        }
    }
}