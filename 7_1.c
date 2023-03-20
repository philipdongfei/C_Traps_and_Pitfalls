#include <stdio.h>

double square(x)
    double x; // the older form
//the now form: double square(double x)
{
    return x * x;
}

void main()
{
    double x = 0.5;
    x = square(x);
    printf("x: %g\n", x);

}
