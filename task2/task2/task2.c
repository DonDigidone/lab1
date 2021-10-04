#include <stdio.h>
#define PI 3.1415926
#include <math.h>


double F(double x)
{
    return  (sin((PI / 2) + 3 * x)) / (1 - sin(3 * x - PI));
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