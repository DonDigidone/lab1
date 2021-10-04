#include <stdio.h>

#define PI 3.1415926
#include <math.h>


void main(void)
{
    double x = 2; //Task1
    printf("x = %.4lf\n", x);
    double f;
    f = (sin( (PI /2)+3*x))/(1-sin(3*x-PI));
    
    printf("f = %.4lf\n", f);
    
    printf("x = ");
    scanf_s("%lf", &x);
  
    
    f = (sin((PI / 2) + 3*x)) / (1 - sin(3*x - PI));
    printf("f = %.4lf\n", f);
}
