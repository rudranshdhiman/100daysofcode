/* Q4: Write a program to calculate the area and circumference of a circle given its radius. */
#include <stdio.h>

int main() {
    float r;
    scanf("%f", &r);
    printf("Area=%.2f, Circumference=%.2f", 3.14159 * r * r, 2 * 3.14159 * r);
    return 0;
}