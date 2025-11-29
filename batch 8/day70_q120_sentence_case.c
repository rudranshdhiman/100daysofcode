/* Q120: Change string to sentence case. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[200];
    fgets(str, sizeof(str), stdin);
    
    int newWord = 1;
    for(int i = 0; str[i] != '\0'; i++) {
        if(isspace(str[i])) {
            newWord = 1;
            printf("%c", str[i]);
        } else {
            if(newWord) {
                printf("%c", toupper(str[i]));
                newWord = 0;
            } else {
                printf("%c", tolower(str[i]));
            }
        }
    }
    return 0;
}
