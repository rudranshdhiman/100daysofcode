/* Q73: Find the sum of each row of a matrix and store it in an array. */
#include <stdio.h>

int main() {
    int r, c, mat[50][50], rowSum[50] = {0};
    scanf("%d %d", &r, &c);
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
            rowSum[i] += mat[i][j];
        }
    }
    for(int i = 0; i < r; i++) printf("%d ", rowSum[i]);
    return 0;
}
