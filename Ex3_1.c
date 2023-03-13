#define N 1024
static char buffer[N];
static char *bufptr;
#define BUFSIZE (NROWS*(NCOLS-1))
static int buffer[BUFSIZE];



void flushbuffer()
{

}

//ex3_1
void bufwrite(char *p, int n)
{
    while (--n >= 0) {
        if (bufptr == &buffer[N-1])
        {
            *bufptr = *p;
            flushbuffer();
        } else    
            *bufptr++ = *p;
        if (n > 0)
            p++;
    }
}

void print(int n) 
{
    if (bufptr == &buffer[BUFSIZE]) {
        static int row = 0;
        int *p;
        for (p = buffer + row; p < bufptr;
                p += NROWS)
            printnum(*p);
        printnum(n);
        printnl();
        if (++row == NROWS) {
            printpage();
            row = 0;
            bufptr = buffer;
        }
    } else
        *bufptr++ = n;
}

void flush()
{
    int row;
    int k = bufptr - buffer;
    if (k > NROWS)
        k = NROWS;
    if (k > 0) {
        for (row = 0; row < k; row++) {
            int *p;
            for (p = buffer + row; p < bufptr;
                    p += NROWS)
                printnum(*p);
            printnl();
        }
        printpage();
    }
}
int main(int argc, char *argv[])
{

    exit(0);
}

