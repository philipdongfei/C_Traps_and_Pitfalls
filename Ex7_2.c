#include <stdio.h>

long atol(char *s)
{
    long r = 0;
    int neg = 0;

    switch (*s) {
        case '-':
            neg = 1;
            /* no break */
        case '+':
            s++;
            break;
    }
    while (*s >= '0' && *s <= '9') {
        int n = *s++ - '0';
        if (neg)
            n = -n;
        r = r * 10 + n;
    }
    return r;
}

void main()
{
    char s[5] = {"-123"};
    long ln = atol(&s[0]);
    printf("ln:%ld\n", ln);

}
