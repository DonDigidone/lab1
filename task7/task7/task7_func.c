#include <stdio.h>
#include "func.h"
#define _USE_MATH_DEFINES
#include <math.h>


double x, result;

void F(void)
{
    result = (sin((M_PI / 2) + 3 * x)) / (1 - sin(3 * x - M_PI));
}
