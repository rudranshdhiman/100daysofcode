/* Q86: Check if a string is a palindrome. */
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int isPal = 1;
    fgets(str, sizeof(str), stdin);
    int len = 0;
    while(str[len] != '\0' && str[len] != '\n') len++;
    
    for(int i = 0; i < len / 2; i++) {
        if(str[i] != str[len - i - 1]) {
            isPal = 0;
            break;
        }
    }
    if(isPal) printf("Palindrome");
    else printf("Not palindrome");
    return 0;
}
