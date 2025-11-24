/* Q77: Check if the elements on the diagonal of a matrix are distinct. */
#include <stdio.h>

int main() {
    int r, c, mat[50][50], diag[50], k = 0, distinct = 1;
    scanf("%d %d", &r, &c);
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
            if(i == j) diag[k++] = mat[i][j];
        }
    }
    for(int i = 0; i < k; i++) {
        for(int j = i + 1; j < k; j++) {
            if(diag[i] == diag[j]) {
                distinct = 0;
                break;
            }
        }
    }
    if(distinct) printf("True");
    else printf("False");
    return 0;
}
