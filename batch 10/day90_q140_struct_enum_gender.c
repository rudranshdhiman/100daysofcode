/* Q140: Struct with Enum Gender. */
#include <stdio.h>

enum Gender {MALE, FEMALE};
struct Person { enum Gender g; };

int main() {
    struct Person p;
    p.g = MALE;
    if(p.g == MALE) printf("Male");
    return 0;
}
