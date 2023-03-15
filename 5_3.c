#include <stdio.h>

void main()
{
    int c;

    static char buf[BUFSIZ];
    setbuf(stdout, buf/*0*/); // 0: The solution is to force output to be unbuffered when debugging.


    while ((c = getchar()) != EOF)
        putchar(c);
}
