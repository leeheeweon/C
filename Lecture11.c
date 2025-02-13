#include <stdio.h>

int main() {
    double d = 1.25;
    float f = 1.25f;

    d = (double)f;
    printf("%.2f\n", d);
    return 0;
}
