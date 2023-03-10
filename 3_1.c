#include <stdio.h>

int main(void){
    int calendar[12][31];
    int (*monthp)[31];
    for (monthp = calendar; monthp < &calendar[12]; monthp++){
        int *dayp;
        for (dayp = *monthp; dayp < &(*monthp)[31]; dayp++)
            *dayp = 0;
    }
    return 0;
}
