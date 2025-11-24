/* Q33: Write a program to check if a number is an Armstrong number. */
#include <stdio.h>
#include <math.h>

int main() {
    int n, org, sum=0, d=0, t;
    scanf("%d", &n); org=n; t=n;
    while(t>0) { d++; t/=10; }
    t=n;
    while(t>0) { int dig=t%10; sum+=pow(dig, d); t/=10; }
    if(sum==org) printf("Armstrong");
    else printf("Not Armstrong");
    return 0;
}
