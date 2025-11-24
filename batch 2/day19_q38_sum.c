/* Q38: Write a program to find the sum of digits of a number. */
#include <stdio.h>

int main() {
    int n, s=0; scanf("%d", &n);
    while(n>0) { s+=n%10; n/=10; }
    printf("%d", s);
    return 0;
}
