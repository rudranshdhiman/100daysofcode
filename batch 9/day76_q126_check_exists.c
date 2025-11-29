/* Q126: Check if file exists and read content. */
#include <stdio.h>

int main() {
    FILE *fp;
    char filename[50], ch;
    
    scanf("%s", filename);
    fp = fopen(filename, "r");
    
    if(fp == NULL) {
        printf("Error: File does not exist!");
    } else {
        printf("File opened successfully.\n");
        while((ch = fgetc(fp)) != EOF) printf("%c", ch);
        fclose(fp);
    }
    return 0;
}
