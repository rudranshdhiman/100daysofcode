/* Q134: Enum for SUCCESS, FAILURE, TIMEOUT. */
#include <stdio.h>

enum Status {SUCCESS, FAILURE, TIMEOUT};

int main() {
    enum Status s = FAILURE;
    if(s == FAILURE) printf("Operation failed");
    return 0;
}
