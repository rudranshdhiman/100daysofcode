/* Q17: Write a program to find the roots of a quadratic equation and categorize them. */
#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, discriminant, root1, root2;
    scanf("%lf %lf %lf", &a, &b, &c);
    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different: %.0lf, %.0lf", root1, root2);
    } else if (discriminant == 0) {
        root1 = -b / (2 * a);
        printf("Roots are real and same: %.0lf", root1);
    } else {
        printf("Roots are complex");
    }
    return 0;
}