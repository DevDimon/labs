#include <stdio.h>
#include <conio.h>
#include <cmath>

using namespace std;

float f(float xf)
{
    return sin(xf) + 0.25;
}

int main(void)
{
    float x0, e, x;
    printf("\nx0 = ");
    scanf("%f", &x0);
    printf("e (точность) = ");
    scanf("%f", &e);
    x = f(x0);
    while (abs(x - f(x)) >= e)
    {
        x = f(x);
    }
    printf("\nКорень уравнения = %f", x);
}