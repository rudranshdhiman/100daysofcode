/* Q128: Count vowels and consonants in text.txt. */
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int v = 0, c = 0;
    
    fp = fopen("text.txt", "r");
    if(fp == NULL) return 1;
    
    while((ch = fgetc(fp)) != EOF) {
        if(isalpha(ch)) {
            char t = tolower(ch);
            if(t == 'a' || t == 'e' || t == 'i' || t == 'o' || t == 'u') v++;
            else c++;
        }
    }
    printf("Vowels: %d\nConsonants: %d", v, c);
    fclose(fp);
    return 0;
}
