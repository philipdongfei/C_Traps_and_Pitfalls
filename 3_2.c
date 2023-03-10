#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(void) {
    char *r=NULL;
    char s[10]={0}, t[10]={0};
    strcpy(s, "Hello");
    strcpy(t, "World!");

    r = malloc(strlen(s) + strlen(t) + 1);
    if (!r) {
        //complain();
        printf("malloc fail!\n");
        exit(1);
    }
    strcpy(r, s);
    strcat(r, t);

    printf("%s\n", r);
    free(r);

    exit(0);
}
