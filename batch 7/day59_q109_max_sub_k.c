/* Q109: Max sum of subarray of size k. */
#include <stdio.h>

int main() {
    int n, k, maxSum = -10000;
    scanf("%d", &n);
    int arr[100];
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &k);
    
    for(int i = 0; i <= n - k; i++) {
        int currentSum = 0;
        for(int j = 0; j < k; j++) {
            currentSum += arr[i+j];
        }
        if(currentSum > maxSum) maxSum = currentSum;
    }
    printf("%d", maxSum);
    return 0;
}
