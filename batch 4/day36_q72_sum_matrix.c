/* Q72: Find the sum of all elements in a matrix. */
#include <stdio.h>

int main() {
    int r, c, sum = 0, val;
    scanf("%d %d", &r, &c);
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &val);
            sum += val;
        }
    }
    printf("%d", sum);
    return 0;
}
