#include <stdio.h>

#define PI 3.14159265f

int main() {
    float radius;
    float area;
    float circum;

    printf("Input radius\n");
    scanf("%f", &radius);

    area = PI * radius * radius;
    circum = 2 * PI * radius;

    printf("The area of the circle is %f\n", area);
    return 0;
}
