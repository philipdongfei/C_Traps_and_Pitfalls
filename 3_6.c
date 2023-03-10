#define N 1024
static char buffer[N];
static char *bufptr;

void flushbuffer()
{

}


void bufwrite(char *p, int n)
{
    while (--n >= 0) {
        if (bufptr == &buffer[N])
            flushbuffer();
        *bufptr++ = *p++;
    }
}

int main(int argc, char *argv[])
{

    exit(0);
}

