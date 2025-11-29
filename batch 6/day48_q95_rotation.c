/* Q95: Check if one string is a rotation of another. */
#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100], temp[200];
    fgets(s1, sizeof(s1), stdin); s1[strcspn(s1, "\n")] = 0;
    fgets(s2, sizeof(s2), stdin); s2[strcspn(s2, "\n")] = 0;
    
    if(strlen(s1) != strlen(s2)) {
        printf("Not rotation");
        return 0;
    }
    strcpy(temp, s1);
    strcat(temp, s1);
    if(strstr(temp, s2)) printf("Rotation");
    else printf("Not rotation");
    return 0;
}
