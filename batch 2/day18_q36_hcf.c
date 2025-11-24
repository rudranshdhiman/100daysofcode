/* Q36: Write a program to find the HCF (GCD) of two numbers. */
#include <stdio.h>

int main() {
    int a, b; scanf("%d %d", &a, &b);
    while(a!=b) { if(a>b) a-=b; else b-=a; }
    printf("%d", a);
    return 0;
}
