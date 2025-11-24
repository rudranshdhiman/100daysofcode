/* Q78: Find the sum of main diagonal elements for a square matrix. */
#include <stdio.h>

int main() {
    int r, c, val, sum = 0;
    scanf("%d %d", &r, &c);
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &val);
            if(i == j) sum += val;
        }
    }
    printf("%d", sum);
    return 0;
}
