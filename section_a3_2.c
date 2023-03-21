#include <stdarg.h>

int printf(char *format, ...)
{
    va_list ap;
    int n;

    va_start(ap, format);
    n = vprintf(format, ap);
    va_end(ap);
    return n;
}

void main(void)
{
    int n = printf("Hello World!\n");
    printf("n: %d\n", n);
}
