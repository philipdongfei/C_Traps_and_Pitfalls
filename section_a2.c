#include <varargs.h>

void error (va_alist) va_dcl
{
    va_list ap;
    char *format;

    va_start(ap);
    format = va_arg(ap, char *);
    fprintf(stderr, "error: ");
    vfprintf(stderr, format, ap);
    va_end(ap);
    fprintf(stderr, "\n");
    exit(1);

}

int printf(va_alist) va_dcl
{
    va_list ap;
    char *format;
    int n;

    va_start(ap);
    format = va_arg(ap, char *);
    n = vprintf(format, ap);
    va_end(ap);
    return n;
}

void main(void)
{
    int n = 2;
    error("test error func: %d\n", n);
    printf("Hello World:%d\n", n);
}
