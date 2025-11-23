/* Q5: Write a program to convert temperature from Celsius to Fahrenheit. */
#include <stdio.h>

int main() {
    float c, f;
    scanf("%f", &c);
    f = (c * 9.0 / 5.0) + 32;
    printf("Fahrenheit=%.0f", f);
    return 0;
}