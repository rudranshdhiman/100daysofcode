/* Q125: Append text to existing file. */
#include <stdio.h>

int main() {
    FILE *fp;
    char text[100];
    
    fp = fopen("data.txt", "a");
    if(fp == NULL) { printf("Error!"); return 1; }
    
    scanf(" %[^\n]", text); // Read line with spaces
    fprintf(fp, "\n%s", text);
    
    printf("File updated successfully with appended text.");
    fclose(fp);
    return 0;
}
