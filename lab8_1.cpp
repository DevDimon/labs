#include <stdio.h>
#include <conio.h>
#include <cmath>

using namespace std;

float f(float xf)
{
    return pow(xf,3) - 0.5*pow(xf,2) + 0.2*xf - 4;
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
            x = (x1 + x2) / 2;
            if (f(x1) * f(x) > 0)
                x1 = x;
            else
                x2 = x;
        }
        printf("\nКорень уравнения = %f, f(x) =%f", x1, f(x1));
    }
}
