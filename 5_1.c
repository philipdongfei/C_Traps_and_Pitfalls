#include <stdio.h>

void main()
{
    char c; // error! int c;
    while ((c = getchar()) != EOF)
        putchar(c);
}
