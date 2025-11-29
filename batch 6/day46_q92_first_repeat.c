/* Q92: Find the first repeating lowercase alphabet in a string. */
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count[256] = {0}, found = 0;
    fgets(str, sizeof(str), stdin);
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            count[str[i]]++;
            if(count[str[i]] > 1) {
                printf("%c", str[i]);
                found = 1;
                break;
            }
        }
    }
    if(!found) printf("-1");
    return 0;
}
