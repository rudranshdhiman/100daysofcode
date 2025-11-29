/* Q124: Copy content from source.txt to destination.txt. */
#include <stdio.h>

int main() {
    FILE *src, *dest;
    char ch;
    
    src = fopen("source.txt", "r");
    dest = fopen("destination.txt", "w");
    
    if(src == NULL || dest == NULL) { printf("Error!"); return 1; }
    
    while((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }
    
    printf("File copied successfully to destination.txt");
    fclose(src);
    fclose(dest);
    return 0;
}
