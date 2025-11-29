/* Q93: Check if two strings are anagrams of each other. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s1[100], s2[100];
    int count[256] = {0}, flag = 1;
    fgets(s1, sizeof(s1), stdin);
    fgets(s2, sizeof(s2), stdin);
    for(int i = 0; s1[i] != '\0'; i++) if(isalpha(s1[i])) count[tolower(s1[i])]++;
    for(int i = 0; s2[i] != '\0'; i++) if(isalpha(s2[i])) count[tolower(s2[i])]--;
    for(int i = 0; i < 256; i++) if(count[i] != 0) flag = 0;
    
    if(flag) printf("Anagrams");
    else printf("Not anagrams");
    return 0;
}
