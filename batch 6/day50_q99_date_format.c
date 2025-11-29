/* Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy. */
#include <stdio.h>

int main() {
    int d, m, y;
    char *months[] = {"", "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    scanf("%d/%d/%d", &d, &m, &y);
    printf("%02d-%s-%d", d, months[m], y);
    return 0;
}
