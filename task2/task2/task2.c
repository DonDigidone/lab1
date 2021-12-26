#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>


double F(double x)
{
    return  (sin((M_PI / 2) + 3 * x)) / (1 - sin(3 * x - M_PI));
}

void main(void)
{

    printf("vvedite x \n");
    double y, x;
    scanf_s("%lf", &x);
    printf("x = %.4lf\n", x);
    y = F(x);
    printf("y = %.4lf\n", y);
}