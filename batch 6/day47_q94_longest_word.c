/* Q94: Find the longest word in a sentence. */
#include <stdio.h>
#include <string.h>

int main() {
    char str[200], longest[50] = "", current[50] = "";
    int i = 0, j = 0, maxLen = 0;
    fgets(str, sizeof(str), stdin);
    
    while(1) {
        if(str[i] == ' ' || str[i] == '\0' || str[i] == '\n') {
            current[j] = '\0';
            if(strlen(current) > maxLen) {
                maxLen = strlen(current);
                strcpy(longest, current);
            }
            j = 0;
            if(str[i] == '\0' || str[i] == '\n') break;
        } else {
            current[j++] = str[i];
        }
        i++;
    }
    printf("%s", longest);
    return 0;
}
