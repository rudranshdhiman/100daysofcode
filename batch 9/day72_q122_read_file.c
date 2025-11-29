/* Q122: Read contents of info.txt using fgets. */
#include <stdio.h>

int main() {
    FILE *fp;
    char buffer[100];
    
    fp = fopen("info.txt", "r");
    if(fp == NULL) { printf("Error opening file!"); return 1; }
    
    while(fgets(buffer, 100, fp) != NULL) {
        printf("%s", buffer);
    }
    
    fclose(fp);
    return 0;
}
