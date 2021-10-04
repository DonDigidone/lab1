#include <stdio.h>
#define PI 3.1415926
#include <math.h>


double x, result;
void F(void);

void F(void)
{
    result = (sin((PI / 2) + 3 * x)) / (1 - sin(3 * x - PI));
}
