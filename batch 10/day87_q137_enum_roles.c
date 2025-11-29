/* Q137: Enum for user roles. */
#include <stdio.h>

enum Role {ADMIN, USER, GUEST};

int main() {
    enum Role r = GUEST;
    if(r == GUEST) printf("Welcome Guest!");
    return 0;
}
