
#define PI 3.1415926
#include <math.h>



double F(double x)
{
    return  (sin((PI / 2) + 3 * x)) / (1 - sin(3 * x - PI));
}
