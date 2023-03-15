#define EOF -1
//#include <stdio.h>

void main()
{
    register int c;
    while ((c = getchar()) != EOF)
        putchar(c);
}
