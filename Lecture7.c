#include <stdio.h>
#include <string.h>

int main() {
    char str1[100] = "Hello World";
    char str2[] = "Hello";
    char str3[100] = "\0";
    char str4[100] = "\n";
    printf("%zu\n", strlen(str1));
    printf("%zu\n", strlen(str2));
    printf("%zu\n", strlen(str3));
    printf("%zu\n", strlen(str4));
    return 0;
}
