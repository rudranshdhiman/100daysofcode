/* Q31: Write a program to take a number as input and print its equivalent binary representation. */
#include <stdio.h>

int main() {
    int n, b[32], i=0; scanf("%d", &n);
    if(n==0) { printf("0"); return 0; }
    while(n>0) { b[i]=n%2; n/=2; i++; }
    for(int j=i-1; j>=0; j--) printf("%d", b[j]);
    return 0;
}
