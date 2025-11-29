/* Q98: Print initials of a name with the surname displayed in full. */
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int lastSpace = -1;
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ') lastSpace = i;
    }
    
    printf("%c.", str[0]);
    for(int i = 1; i < lastSpace; i++) {
        if(str[i] == ' ') printf("%c.", str[i+1]);
    }
    printf(" %s", &str[lastSpace + 1]);
    return 0;
}
