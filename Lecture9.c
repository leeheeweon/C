#include <stdio.h>
#include <i386/limits.h>

int main() {
    double d = 3.14159265358979323846;

    printf("%c\n", 'A');
    printf("%s", "I love you\n");
    printf("Even if there's a small chance, "
           "we owe this to everyone who's not in this room to try.\n");

    printf("\n");
    printf("%d %i %i %i\n", 1004, 1234, INT_MAX,UINT_MAX);
    printf("%u %u %u\n", 1024, -1, UINT_MAX);


    return 0;
}
