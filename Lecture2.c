#include <stdbool.h>
#include <stdio.h>

void sayHello(void);

int main() {
    for (int i = 0; i < 3; ++i) {
        sayHello();
    }

    return 0;
}

void sayHello() {
    printf("Hello, world!\n");
}
