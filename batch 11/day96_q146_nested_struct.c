/* Q146: Employee structure with nested Date structure. */
#include <stdio.h>

struct Date { int d, m, y; };
struct Employee { char name[50]; int id; struct Date join; };

int main() {
    struct Employee e = {"Raj", 11, {12, 5, 2020}};
    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%d", e.name, e.id, e.join.d, e.join.m, e.join.y);
    return 0;
}
