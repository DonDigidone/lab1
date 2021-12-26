#include <stdio.h>

#define _USE_MATH_DEFINES
#include <math.h>


void main(void)
{
    double x = 2; //Task1
    printf("x = %.4lf\n", x);
    double f;
    f = (sin( (M_PI /2)+3*x))/(1-sin(3*x-M_PI));
    
    printf("f = %.4lf\n", f);
    
    printf("x = ");
    scanf_s("%lf", &x);
  
    
    f = (sin((M_PI / 2) + 3*x)) / (1 - sin(3*x - M_PI));
    printf("f = %.4lf\n", f);
}
