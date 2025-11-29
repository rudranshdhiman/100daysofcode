/* Q127: Read input.txt, convert to uppercase, write to output.txt. */
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *in, *out;
    char ch;
    
    in = fopen("input.txt", "r");
    out = fopen("output.txt", "w");
    if(in == NULL) return 1;
    
    while((ch = fgetc(in)) != EOF) {
        fputc(toupper(ch), out);
    }
    
    fclose(in);
    fclose(out);
    return 0;
}
