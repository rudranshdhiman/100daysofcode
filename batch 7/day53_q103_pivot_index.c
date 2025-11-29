/* Q103: Calculate the pivot index where left sum equals right sum. */
#include <stdio.h>

int main() {
    int n, total = 0, leftSum = 0;
    scanf("%d", &n);
    int arr[100];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        total += arr[i];
    }
    
    for(int i = 0; i < n; i++) {
        if(leftSum == (total - leftSum - arr[i])) {
            printf("%d", i);
            return 0;
        }
        leftSum += arr[i];
    }
    printf("-1");
    return 0;
}
