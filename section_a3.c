#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void error(char *format, ...)
{
    va_list ap;
    va_start(ap, format);
    fprintf(stderr, "error: ");
    vfprintf(stderr, format, ap);
    va_end(ap);
    fprintf(stderr, "\n");
    exit(1);
}

void main(void)
{
    int n = 3;
    error("test error:%d", n);
}



