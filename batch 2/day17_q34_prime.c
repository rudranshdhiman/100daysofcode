/* Q34: Write a program to check if a number is prime. */
#include <stdio.h>

int main() {
    int n, f=1; scanf("%d", &n);
    if(n<=1) f=0;
    for(int i=2; i*i<=n; i++) if(n%i==0) { f=0; break; }
    if(f) printf("Prime"); else printf("Not prime");
    return 0;
}
