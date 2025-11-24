/* Q41: Write a program to swap the first and last digit of a number. */
#include <stdio.h>
#include <math.h>

int main() {
    int n, first, last, digits, swapped, middle, p;
    scanf("%d", &n);
    digits = (int)log10(n);
    p = pow(10, digits);
    first = n / p;
    last = n % 10;
    middle = (n % p) / 10;
    swapped = last * p + middle * 10 + first;
    if (n < 10) swapped = n; 
    printf("%d", swapped);
    return 0;
}
