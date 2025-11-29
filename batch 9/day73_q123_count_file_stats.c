/* Q123: Count characters, words, and lines in a text file. */
#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int chars = 0, words = 0, lines = 0, inWord = 0;
    
    fp = fopen("sample.txt", "r");
    if(fp == NULL) { printf("Error!"); return 1; }
    
    while((ch = fgetc(fp)) != EOF) {
        chars++;
        if(ch == '\n') lines++;
        if(ch == ' ' || ch == '\n' || ch == '\t') inWord = 0;
        else if(inWord == 0) {
            inWord = 1;
            words++;
        }
    }
    if(chars > 0) lines++; // Count last line if no newline at EOF
    
    printf("Characters: %d\nWords: %d\nLines: %d", chars, words, lines);
    fclose(fp);
    return 0;
}
