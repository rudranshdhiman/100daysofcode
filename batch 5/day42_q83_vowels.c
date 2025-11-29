/* Q83: Count vowels and consonants in a string. */
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int v = 0, c = 0;
    fgets(str, sizeof(str), stdin);
    for(int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        char ch = tolower(str[i]);
        if(ch >= 'a' && ch <= 'z') {
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') v++;
            else c++;
        }
    }
    printf("Vowels=%d, Consonants=%d", v, c);
    return 0;
}
