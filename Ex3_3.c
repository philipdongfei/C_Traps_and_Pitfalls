#include <stdio.h>


int* bSearch(int *pStar, int n, int Num) {
    int lo = 0, hi = n - 1;
    while (lo <= hi) {
        int mid = (hi + lo) / 2;
        if (Num < *(pStar+mid))
            hi = mid - 1;
        else if (Num > *(pStar+mid))
            lo = mid + 1;
        else
            return pStar + mid;
    }
    return NULL;
}

int main(void)
{
    int a[5] = {1, 2, 3, 4, 5};
    int Num, N;
    N = 5, Num = 1;
    int *ptr = bSearch(&a[0], N, Num);
    if (ptr) 
        printf("Search Num:%d\n", *ptr);
    else 
        printf("don't search!\n");
    return 0;
}
