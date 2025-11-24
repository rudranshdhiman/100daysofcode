/* Q76: Check if a matrix is symmetric. */
#include <stdio.h>

int main() {
    int r, c, mat[50][50], isSym = 1;
    scanf("%d %d", &r, &c);
    for(int i = 0; i < r; i++) for(int j = 0; j < c; j++) scanf("%d", &mat[i][j]);
    if(r != c) isSym = 0;
    else {
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                if(mat[i][j] != mat[j][i]) {
                    isSym = 0;
                    break;
                }
            }
        }
    }
    if(isSym) printf("True");
    else printf("False");
    return 0;
}
