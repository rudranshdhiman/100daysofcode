/* Q39: Write a program to find the product of odd digits of a number. */
#include <stdio.h>

int main() {
    int n, p=1, f=0; scanf("%d", &n);
    while(n>0) { int d=n%10; if(d%2!=0) { p*=d; f=1; } n/=10; }
    if(!f) p=1; printf("%d", p);
    return 0;
}
