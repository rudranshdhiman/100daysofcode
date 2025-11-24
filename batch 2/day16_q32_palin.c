/* Q32: Write a program to check if a number is a palindrome. */
#include <stdio.h>

int main() {
    int n, org, rev=0; scanf("%d", &n);
    org=n;
    while(n>0) { rev=rev*10 + n%10; n/=10; }
    if(org==rev) printf("Palindrome");
    else printf("Not palindrome");
    return 0;
}
