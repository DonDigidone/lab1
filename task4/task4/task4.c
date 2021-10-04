#include <stdio.h>
#define PI 3.1415926
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
    result = (sin((PI / 2) + 3 * x)) / (1 - sin(3 * x - PI));
}
