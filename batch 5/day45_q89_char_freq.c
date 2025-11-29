/* Q89: Count frequency of a given character in a string. */
#include <stdio.h>

int main() {
    char str[100], target;
    int count = 0;
    fgets(str, sizeof(str), stdin);
    scanf("%c", &target);
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == target) count++;
    }
    printf("%d", count);
    return 0;
}
