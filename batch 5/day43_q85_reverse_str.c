/* Q85: Reverse a string. */
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], temp;
    fgets(str, sizeof(str), stdin);
    int len = 0;
    while(str[len] != '\0' && str[len] != '\n') len++;
    str[len] = '\0'; // Remove newline if present

    for(int i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    printf("%s", str);
    return 0;
}
