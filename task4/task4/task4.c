#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>



double x, result;
void F(void);

void main(void)
{
   
   printf("vvedite x \n");
    scanf_s("%lf", &x);
     printf("x = %.4lf\n", x);
    F();
    printf("result = %.4lf\n", result);
}

void F(void)
{
    result = (sin((M_PI / 2) + 3 * x)) / (1 - sin(3 * x - M_PI));
}
