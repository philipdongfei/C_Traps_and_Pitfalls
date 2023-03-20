#include <stdio.h>
#include <math.h>

void main() 
{
    char c;
    c = -37;
    printf("%u\n", c);

    int n = 108;
    printf("%d decimal = %o octal = %x hex\n", n, n, n);
    printf("There %s %d item%s in the list.\n",
            n!=1? "are": "is", n, n!=1? "s": "");
    printf("The decimal equivalent of '%c' is %d\n",
            '*', '*');
    printf("Pi = %g\n", 4 * atan(1.0));
    printf("%g %g %g %g %g\n",
            1/1.0, 1/2.0, 1/3.0, 1/4.0, 0.0);
    printf("%g\n", 2.0/3.0);
    printf("%g %g %g\n", 3.14159e-3, 3.14159e-4, 3.14159e-5);
    printf("%f\n", 1e38);
    printf("%%d prints a decimal value\n");

    int i;
    for (i = 0; i <= 10; i++)
        printf("%2d %2d *\n", i, i*i);

    printf("%8%\n");
    printf("%.2d/%.2d/%.4d\n", 7, 14, 1789);

    double pi;
    pi = 4 * atan(1.0);
    printf("%.0f %.1f %.2f %.3f %.6f %.10f\n",
            pi, pi, pi, pi, pi, pi);
    printf("%.0e %.1e %.2e %.10e\n",
            pi, pi, pi, pi, pi, pi);

    printf("%.1g %.2g %.4g %.8g\n",
            10/3.0, 10/3.0, 10/3.0, 10/3.0);

    printf("%+d %+d %+d\n", -5, 0, 5);

    for (i = -3; i <= 3; i++)
        printf("% d\n", i);

    double x; 
    for (x = -3; x <= 3; x++)
        printf("% e  %+e  %e\n", x, x, x);

    printf("%.0f %#.0f %g %#g\n",
            3.0, 3.0, 3.0, 3.0);
    n = 10;
    printf("%*%\n", n);
    n = -10;
    printf("%*%\n", n);

    printf("hello\n%n", &n);

}
