#include <stdio.h>
#include <i386/limits.h>

int main() {
    unsigned int uMax = UINT_MAX;
    unsigned int uMin = 0;
    signed int iMax = INT_MAX;
    signed int iMin = INT_MIN;

    printf("uMax = %u\n", uMax);
    printf("uMin = %u\n", uMin);
    printf("iMax = %d\n", iMax);
    printf("iMin = %d\n", iMin);

    return 0;
}
