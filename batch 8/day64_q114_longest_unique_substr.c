/* Q114: Find length of longest substring without repeating characters. */
#include <stdio.h>
#include <string.h>

int main() {
    char s[200];
    scanf("%s", s);
    int n = strlen(s);
    int maxLen = 0;
    
    for(int i = 0; i < n; i++) {
        int visited[256] = {0};
        for(int j = i; j < n; j++) {
            if(visited[s[j]]) break;
            else {
                visited[s[j]] = 1;
                if(j - i + 1 > maxLen) maxLen = j - i + 1;
            }
        }
    }
    printf("%d", maxLen);
    return 0;
}
