/* Q27: Write a program to print the sum of the first n odd numbers. */
#include <stdio.h>

int main() {
    int n, sum=0, count=0, num=1;
    scanf("%d", &n);
    while(count < n) { sum+=num; num+=2; count++; }
    printf("%d", sum);
    return 0;
}
