// Q4: Calculate the area and circumference of a circle given its radius

#include <stdio.h>

int main(void) {
    float radius, area, circumference;
    float pi = 3.14;

    scanf("%f", &radius);

    area = pi * radius * radius;
    circumference = 2 * pi * radius;

    printf("Area=%.2f, Circumference=%.2f", area, circumference);

    return 0;
}