/* Q79: Perform diagonal traversal of a matrix. */
#include <stdio.h>

int main() {
    int m, n, mat[50][50];
    scanf("%d %d", &m, &n);
    for(int i = 0; i < m; i++) for(int j = 0; j < n; j++) scanf("%d", &mat[i][j]);
    
    int row = 0, col = 0;
    for(int i = 0; i < m * n; i++) {
        printf("%d ", mat[row][col]);
        if((row + col) % 2 == 0) { // Moving up
            if(col == n - 1) row++;
            else if(row == 0) col++;
            else { row--; col++; }
        } else { // Moving down
            if(row == m - 1) col++;
            else if(col == 0) row++;
            else { row++; col--; }
        }
    }
    return 0;
}
