/* Q118: Find missing number in range 0 to n. */
#include <stdio.h>

int main() {
    int n, sum = 0, total;
    scanf("%d", &n); // Input size (which is range max)
    int temp;
    // Note: If array has 'n' elements ranging 0 to n, one is missing.
    // The sum of 0..n is n*(n+1)/2.
    // Since input logic varies, usually size is n, containing n numbers.
    // We scan n numbers.
    for(int i = 0; i < n; i++) {
        scanf("%d", &temp);
        sum += temp;
    }
    total = n * (n + 1) / 2;
    printf("%d", total - sum);
    return 0;
}
