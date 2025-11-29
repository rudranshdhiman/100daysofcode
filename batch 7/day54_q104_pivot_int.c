/* Q104: Find pivot integer x such that sum 1..x equals sum x..n. */
#include <stdio.h>
#include <math.h>

int main() {
    int n, sum_n, x;
    scanf("%d", &n);
    // x(x+1)/2 = n(n+1)/2 - x(x-1)/2
    // Reduces to x = sqrt(n*(n+1)/2)
    int total = n * (n + 1) / 2;
    int root = (int)sqrt(total);
    if(root * root == total) printf("%d", root);
    else printf("-1");
    return 0;
}
