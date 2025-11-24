/* Q28: Write a program to print the product of even numbers from 1 to n. */
#include <stdio.h>

int main() {
    int n, p=1; scanf("%d", &n);
    for(int i=2; i<=n; i+=2) p*=i;
    printf("%d", p);
    return 0;
}
