#include <stdio.h>

#define abs(x) (((x)>=0)?(x):-(x))
#define max(a,b)  ((a)>(b)?(a):(b))
#define put(x,p) \
    (--(p)->_cnt>=0?(*(p)->_ptr++=(x)):_flsbuf(x,p))//the ANSI standard warns that putc may evaluate its second argument twice.
#define toupper(c) \
    ((c)>='a' && (c)<='z'? (c)+('A'-'a'): (c))//trap: toupper(*p++)

void main()
{
    int x[3] = {2,3,1};
    int biggest = x[0];
    int i = 1, n = 3;
    char c[3] = {'e', 'f', 'g'};
    char *p = &c[0];
    while (i < n)
        biggest = max (biggest, x[i++]); // if a is greater than b, a will be evaluated twice.
    /*one way:
     * for (i = 1; i < n; i++)
     *     biggest = max(biggest, x[i]);
     *two way:
     * for (i = 1; i < n; i++)
     *     if (x[i] > biggest)
     *          biggest = x[i];
     *
     */
    printf("biggest:%d\n", biggest);
    //trap: toupper(*p++)
    char cupper = toupper(*p++);
    printf("cupper: %c\n", cupper);


}
