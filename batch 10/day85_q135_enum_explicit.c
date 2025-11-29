/* Q135: Enum with explicit values starting from 10. */
#include <stdio.h>

enum Alpha {A = 10, B, C};

int main() {
    printf("A=%d\nB=%d\nC=%d", A, B, C);
    return 0;
}
