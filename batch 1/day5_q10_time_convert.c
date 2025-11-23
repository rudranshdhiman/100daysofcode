/* Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format. */
#include <stdio.h>

int main() {
    int total_seconds, h, m, s;
    scanf("%d", &total_seconds);
    h = total_seconds / 3600;
    m = (total_seconds % 3600) / 60;
    s = (total_seconds % 3600) % 60;
    printf("%d:%d:%d", h, m, s);
    return 0;
}